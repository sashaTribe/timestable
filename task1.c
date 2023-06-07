// -----------------------------------------------------
// CSC371 Advanced Object Oriented Programming (2022/23)
// 
// (c) Lin Yuanbo Wu
//     l.y.wu@swansea.ac.uk
// -----------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#define MAX_TABLE_SIZE 13
void generateTable(int num, int *table);
void printTable(int num, int *table);
int main(int argc , char *argv[]) {
    if (argc != 2) {
        printf("%s <num>\n where <num> is an integer between 0 and 12\n", 
        argv[0]);
        return -1;
    }
    int num = atoi(argv[1]);
    if (num < 0 || num > 12) {
        printf("Invalid number size! Must be between 0 and 12.\n");
        return -1;
    }
    //int values[MAX_TABLE_SIZE];
    int *A = (int*) malloc(MAX_TABLE_SIZE * sizeof(int));
    int i;
    for(i = 0; i < MAX_TABLE_SIZE + 1; i++){
        printTable(num, A);
        A[i] = i*num;
    }                                                                                                                                                                                                
    free(A);

    /* generateTable(num, values);
    printTable(num, values); */
    return 0;
}
void generateTable(int num, int *table) {
    int i;
    for (i = 0; i < MAX_TABLE_SIZE; i++) {
        table[i] = i * num;
    }
}
void printTable(int num, int *table) {
    printf("%-2d times table\n--------------\n", num);
    int i;
    for (i = 0; i < MAX_TABLE_SIZE; i++) {
        printf("%-2d * %-2d = %d\n", num, i, *(table+i));
    }
    printf("\n");
}