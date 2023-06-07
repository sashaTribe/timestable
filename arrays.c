#include "arrays.h"
#include <stdio.h>
double mean(int length, int *arr){
    int i;
    int sum = 0;
    double mean = 0;
    for(i=0; i < length; i++){
        sum += arr[i];
    }
    return sum/length;
}