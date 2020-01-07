/**************************
 * James Busch
 * 01/07/20
 * 
 * Version: 0.01
 * 
 * Just some util functions to be used in the main mostly for
 * testing array data
 * 
 * ***********************/

#include "utils.h"

void printArray(int **arr, int length){
    for(int i = 0; i < length; i++){
        printf("%d ", (*arr)[i]);
    }
    printf("\n");
}

void fillArrayRandom(int **arr, int length, int floor, int roof){
    for(int i = 0; i < length; i++){
        (*arr)[i] = (rand() % (roof - (floor + 1)) + floor);
    }
}

void fillArrayDescending(int **arr, int length){
    int j = 0;
    for(int i = length; i > 0; i--, j++){
        (*arr)[j] = i;
    }
}
