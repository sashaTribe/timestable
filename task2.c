// -----------------------------------------------------
// CSC371 Advanced Object Oriented Programming (2022/23)
// 
// (c) Lin Yuanbo Wu
//     l.y.wu@swansea.ac.uk
// -----------------------------------------------------
#include <stdio.h>
#include "timestable.h"
#include <stdlib.h>


int main(int argc , char *argv[]) {
    
    //int values[MAX_TABLE_SIZE];
    int *A[MAX_TABLE_SIZE];
    //A = (int*) malloc(MAX_TABLE_SIZE * sizeof(int));
    int i;
    for(i = 0; i < MAX_TIMES_TABLE + 1; i++){
        //printTable(num, A);
        A[i] = malloc(MAX_TIMES_TABLE*sizeof(int));
        generateTable(i, A[i]);
        
    }   
    printTables(A);
    for(i=0; i< MAX_TIMES_TABLE+1; i++){
        free(A[i]);
    }                                                                                                                                                                                             
    

    // generateTable(num, values);
    
    return 0;
}
