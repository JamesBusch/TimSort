/**************************
 * James Busch
 * 07/01/20
 * 
 * Version: 0.02
 * 
 * Just some util functions to be used in the main mostly for
 * testing array data
 * 
 * ***********************/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "arrUtils.h"

/**********************
 * printArray
 * 
 * This function an array given the array pointer
 * and array length
 * 
 * in: int **arr, int length
 * out: void
 *********************/
void printArray(int **arr, int length){
    for(int i = 0; i < length; i++){
        printf("%d ", (*arr)[i]);
    }
    printf("\n");
}

/*********************
 * fillArrayRandom
 * 
 * This function will fill an array with a specified
 * range of numbers given the array pointer the length of
 * the array, the floor, and the roof of the wanted random roll
 * 
 * in: int **arr, int length, int floor, int roof
 * out: void
 ********************/ 
void fillArrayRandom(int **arr, int length, int floor, int roof){
    srand(time(0));
    for(int i = 0; i < length; i++){
        (*arr)[i] = (rand() % (roof - (floor + 1)) + floor);
    }
}

/**********************
 * fillArrayDescending
 * 
 * This function fills the given array with decending numbers
 * given the array pointer and length
 * i.e if the array length is 5 the array would be filled with
 * {5, 4, 3, 2, 1}
 * 
 * in: int **arr, int length
 * out: void
 *********************/
void fillArrayDescending(int **arr, int length){
    int j = 0;
    for(int i = length; i > 0; i--, j++){
        (*arr)[j] = i;
    }
}
