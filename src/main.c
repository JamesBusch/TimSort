/**************************
 * James Busch
 * 01/05/20
 * 
 * Version: 0.01
 * 
 * This main is used for testing the differnt sorting algorthms
 * both by printing the before and after of the array and using 
 * assert
 * 
 * ***********************/


#include "insertionSort.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <time.h>

int main(){
    srand(time(0));
    int *arr;
    int *bigArr;
    arr = malloc(sizeof(int) * 10);
    int j = 0;

    printf("NOTE: only arrays with size <= 10 will have before and after print outs\n");

    printf("========TEST ONE==========\n");
    for(int i = 10; i > 0; i--, j++){
        arr[j] = i;
    }
    printf("Orginal Array:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(&arr, 10);
    printf("After insertion sort\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        assert((i + 1) == arr[i]);
    }
    printf("=====Assertion succesful, end of test one=============\n");

    printf("===========TEST TWO===========\n");
    for(int i = 0; i < 10; i++){
        arr[i] = (rand() % (500 - (-500 + 1)) -500);
    }
    printf("Orginal Array:\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(&arr, 10);
    printf("After insertion sort\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    for(int i = 0; i < 9; i++){
        assert(arr[i] <= arr[i + 1]);
    }
    printf("=====Assertion succesful, end of test two=============\n");
    free(arr);

    printf("===========TEST THREE=================\n");
    
    bigArr = malloc(sizeof(int) * 500);
    for(int i = 0; i < 500; i++){
        bigArr[i] = (rand() % (10000 - (-10000 + 1)) -10000);
    }
    insertionSort(&bigArr, 500);
    for(int i = 0; i < 499; i++){
        assert(bigArr[i] <= bigArr[i + 1]);
    }
    printf("=====Assertion succesful, end of test three=============\n");

    free(bigArr);
    return 0;
}