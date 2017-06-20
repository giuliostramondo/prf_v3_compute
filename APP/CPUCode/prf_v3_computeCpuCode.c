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

    int **A_test = (int**)malloc(sizeof(int*)*N);

    for(i=0;i<N;i++){
        A_test[i]= (int*)malloc(sizeof(int)*M);
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            A_test[i][j]= i*M+j;
        }
    }
    data_type* input_data;
    data_type* output_data;
    int counter=0;
    char* scheme_name = schemeStringFromMappingScheme(s);

        input_data = fillPRF( p, q, RECT_ROW,A_test,  &counter);
        output_data = (data_type*) malloc(sizeof(data_type)*p*q*counter);
        //Add here first call to the PRF on maxeler board
printf("Executing\n");
        //For testing purposes the computation is skept. 
        int32_t compute_addr_len=0;
        int64_t *compute_ops = (int64_t*) malloc(sizeof(int64_t)*10);
        

        prf_v3_compute(counter, compute_addr_len , counter, input_data,output_data, compute_ops);
printf("Done\n");

//            int error = 0;
//            //Check equivalence
//            for (j=0;j<counter;j++){
//                if (s == ROW_COL && !((input_data[j*((p*q)+4) + (p*q)] % p==0) || (input_data[j*((p*q)+4) + (p*q)+1] % q==0)) ){
//                                continue;
//                }
//                for(k=0;k<p*q;k++){
//                    if(output_data[j*(p*q)+k] != expected_output[j*(p*q)+k]){
//                        error=1;
//                    }
//                }
//                if(error){
//                    //Print error
//                    printf("\033[31m[Error]\033[0m\t output %d\n",j);
//                    printf("Input: ");
//                     for(w=0;w<(p*q)+4;w++){
//                        printf("%d ",input_data[j*((p*q)+4)+w]);
//                    }
//                    printf("\n");
//                    printf("Expected Output: ");
//            for(w=0;w<p*q;w++){
//                        printf("%d ",expected_output[j*(p*q)+w]);
//                    }
//                    printf("\n");
//                    printf("Output: ");
//                    for(w=0;w<p*q;w++){
//                        printf("%d ",output_data[j*(p*q)+w]);
//                    }
//                    printf("\n");
//                    error=0;
//                }else{
//            printf("\033[32m[Correct]\033[0m\t output %d\n",j);
//            printf("Input: ");
//                         for(w=0;w<(p*q)+4;w++){
//                            printf("%d ",input_data[j*((p*q)+4)+w]);
//                        }
//                        printf("\n");
//                        printf("Output: ");
//                        for(w=0;w<p*q;w++){
//                            printf("%d ",output_data[j*(p*q)+w]);
//                        }
//                        printf("\n");
//
//        }
//            }


        for( i = 0; i<M;i++){
            for(j=0; j<N ; j++){
            printf("%d \n", output_data[i*N+j]);
            }
        }    

    return 0;
}



