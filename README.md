=============================
PolyMem Caesar Cypher
=============================

This repository contains a vectorised implementation of the Caesar Cypher that takes advantage of parallel memories.

Caesar Cypher
------------
The Caesar cipher is one of the simplest and most widely known encryption techniques. It is a substitution cipher that replaces each letter in the plaintext by a letter some fixed position down the alphabet.
We have stored the plaintext as a bidimensional matrix and we use a vector key. At each step the vector key is added to a block of elements of the matrix, starting from the top left corner and then moving of the number of elements in the key.



PolyMem implementation
----------------------

Our implementation – shown in the figure below – is composed by a host CPU,  that is linked over PCI-e to PolyMem, instanciated on the FPGA fabric. The Caesar Cipher, our application, is implemented in the FPGA logic and communicate with PolyMem. PolyMem is physically divided in two separate parallel memories: the first one stores the plaintext, the second one stores the encrypted text produced by the application. The computation is started by the host cpu that loads the plaintext in the first PolyMem. After the plaintext is loaded PolyMem is accessed by the Application, which performs a vector addition and stores the result in the second PolyMem. At the end of the computation the encrypted test is sent to the host CPU by the second PolyMem over PCI-e.


Usage
-----
* Configuration of PolyMem

Our PRF implementation allow the user to customize the capacity, number of lanes, mapping scheme and frequency at wich the design is synthesized. All those paramethers can be set in the PolyMem configuration file PRFConfiguration.maxj located in APP/EngineCode/src/exampleproject

* Compilation

To compile the whole project - PolyMem bitstream and testbench - go in the CPUCode folder and run:
```
make RUNRULE=DFE distclean
make RUNRULE=DFE build
```

This process could take more than one hour if the bitstream has not been synthesized yet.

* Running the Caesar Cypher 

Once the design is compiled the testbench binary will be located in /RunRule/DFE/binaries and called prf_v3_compute. 
The following command line parameters need to be set to run the application:

```
        -N <num>      Change the horizontal size of the input matrix (default 256)
        -M <num>      Change the vertical size of the input matrix (default 256)
        -p <num>      Change the vertical size of the PRF (default 2)
        -q <num>      Change the horizontal size of the PRF (default 4)
        -s <num>      Change the scheme used by the PRF (default 1 -> ReRo)
                       other schemes 0->ReO, 2->ReCo, 3->RoCo, 4->ReTr
        -f <filename> Path to the text file to be encrypted.

```

