/*
    Copyright 2016 Giulio Stramondo

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */


#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "prf.h"
#include "utility.h"
#include "testbench_utils.h"

#include "Maxfiles.h"
#include "MaxSLiCInterface.h"

int N;
int M;

void setCompute(int N, int64_t* compute, int64_t value){
    int i;
    for( i=0;i<N;i++)
        compute[i]=value;
}

int64_t generateComputeOp(int32_t compute_i, int32_t compute_j, int32_t compute_acc_type){
         int64_t compute_op = compute_i<< 18;
        compute_op = (compute_j<< 4) | compute_op;
        compute_op = compute_acc_type | compute_op;
        return compute_op;
}

uint64_t *packString(char c[], int *len_packed){
        int len = strlen(c);
        *len_packed=(len/8);
        if(len%8!=0)
            *len_packed+=1;
        uint64_t *packed=(uint64_t*)malloc(sizeof(uint64_t)*((len/8)+1));
        memcpy(packed,c,len);
        return packed;
}

char *unpackString(uint64_t* packed_string, int len_packed){
        char *unpacked=(char*)malloc(sizeof(char)*len_packed*8);
        memcpy(unpacked,packed_string,(len_packed)*8);
        return unpacked;
}

int main(int argc, char* argv[])
{
    int i,j,k,w;
    Options parameters = parseArguments(argc,argv);
    if(parameters.error)
    return 0;
    int p = parameters.p;
    int q = parameters.q;
    N = parameters.N;
    M = parameters.M;
    scheme s = parameters.s;
    //int A_test[N][M];
    //string length 211 char
    //
    FILE *file;
    char* string = (char*)malloc(sizeof(char)*N*M*8);
    //file = fopen("/home/giuliostramondo/Projects/prf_v3_compute/APP/CPUCode/text_512x512.txt", "r");
    file = fopen(parameters.input_file , "r");
    
    i=0;
    char c;
    if (file) {
        while ((c = getc(file)) != EOF)
                    string[i++]=c;
        fclose(file);
        //adding string terminator
        string[N*M*8-1]='\0';
    }
    else{
        printf("Could not find file\n");
    }
    printf("number of chars: %d\n",i);
   // int64_t **A_test = (int64_t**)malloc(sizeof(int64_t*)*N);
    int length=0;
    uint64_t *A_test_1d = packString(string, &length);
    printf("Packed string length: %d\n",length);
   // for(i=0;i<N;i++){
    //    A_test[i]= (int64_t*)malloc(sizeof(int64_t)*M);
    //}
    //for(i=0;i<N;i++){
    //    for(j=0;j<M;j++){
    //            A_test[i][j]= (int64_t)string[i*M+j];
     //   }
    //}
    data_type* input_data;
    data_type* output_data;
    struct timeval before, after;
    int counter=0;
    char* scheme_name = schemeStringFromMappingScheme(s);

        //input_data = fillPRF( p, q, RECT_ROW,A_test,  &counter);
        input_data = fillPRF1D( p, q,M, RECT_ROW,A_test_1d,  &counter);
        output_data = (data_type*) malloc(sizeof(data_type)*p*q*counter);
        printf("Counter %d\n",counter);
        //Add here first call to the PRF on maxeler board
        //For testing purposes the computation is skept. 
        int32_t compute_addr_len=2;
        int64_t *compute_ops = (int64_t*) malloc(sizeof(int64_t)*10);
        
        // i=1 j=1 acc_type= Rectangle
        compute_ops[0]=generateComputeOp(1,1,1);
        compute_ops[1]=generateComputeOp(0,0,1);
	//Loading bitstream
	max_file_t* max_prf_comp = prf_v3_compute_init();	


	max_engine_t* myDFE = max_load(max_prf_comp,"*");
        
        int64_t caesar_param =3;

	//Setting inputs
	prf_v3_compute_actions_t prf_actions;
	prf_actions.param_N=counter;
	prf_actions.param_N1=N;
	prf_actions.param_M=M;
	prf_actions.param_computation_access_type=1;
	prf_actions.param_caesar_param=caesar_param;
	prf_actions.param_in_accesses=counter;
	prf_actions.instream_input_vector=input_data;
	prf_actions.outstream_output=output_data;
	
        printf("Executing: caesar code param %d\n",caesar_param);

        gettimeofday(&before, NULL);
        prf_v3_compute_run(myDFE,&prf_actions);
        gettimeofday(&after, NULL);


        printf("Done\n");
	double time =(double)(after.tv_sec - before.tv_sec) +
                                (double)(after.tv_usec - before.tv_usec) / 1e6;
	printf("Execution took: %lf s, %lf Op/s", time, N*M*8/time);
        char* output_string = unpackString(output_data,length);
        printf("Printing output\n");
        for( i = 0; i<M*8;i++){
            for(j=0; j<N ; j++){
                         
                printf("%c ", output_string[i*N+j]);
            }
            printf("\n");
        }    
        counter=0;
        free(input_data);
        printf("Generating input data...\n");
        fflush(stdout);
        input_data =fillPRF1D(p,q,M,RECT_ROW,output_data,&counter);
        printf("Done\n");
        fflush(stdout);

	prf_actions.instream_input_vector=input_data;
	prf_actions.param_caesar_param=-caesar_param;
        printf("Executing: caesar code  inverse param %d\n",-caesar_param);
        gettimeofday(&before, NULL);
       	prf_v3_compute_run(myDFE,&prf_actions);
	gettimeofday(&after, NULL);
        printf("Done\n");
	time =(double)(after.tv_sec - before.tv_sec) +
                                (double)(after.tv_usec - before.tv_usec) / 1e6;
	printf("Execution took: %lf s, %lf Op/s", time, N*M*8/time);
        output_string = unpackString(output_data,length);
	//prf_v3_compute(counter,-caesar_param, counter, input_data,output_data);
        //printf("Done\n");

        //output_string = unpackString(output_data,length);
        printf("Printing output\n");
        for( i = 0; i<M*8;i++){
            for(j=0; j<N ; j++){
                         
                printf("%c ", output_string[i*N+j]);
            }
            printf("\n");
        }
    return 0;
}



