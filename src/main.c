/**************************
 * James Busch
 * 01/07/20
 * 
 * Version: 0.04
 * 
 * This main is used for testing the differnt sorting algorthms
 * both by printing the before and after of the array and using 
 * assert
 * 
 * ***********************/

//TODO move testers for each sorting algorthim into there own files
//TODO add run command for each tester to makefile
//TODO clean up testing code to make more readable      

#include "insertionSort.h"
#include "mergeSort.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(){

    int *arr;
    int *bigArr;
    int *smallArr;
    arr = malloc(sizeof(int) * 10);

    //For both merge sort and insertion sort I will not be testing for invalid arrays
    //due to both of these being internal implementions never to be seen by the user it
    //will be up to tim sort to make sure it is passing the functions valid arrays
    printf("NOTE: only arrays with size <= 10 will have before and after print outs\n");

    printf("========================TEST ONE========================\n");
    fillArrayDescending(&arr, 10);
    
    printf("Orginal Array:\n");
    printArray(&arr, 10);

    insertionSort(&arr, 10);
    printf("After insertion sort:\n");
    printArray(&arr, 10);

    for(int i = 0; i < 10; i++){
        assert((i + 1) == arr[i]);
    }
    printf("=========Assertion succesful, end of test one===========\n");

    printf("========================TEST TWO========================\n");
    fillArrayRandom(&arr, 10, -500, 500);

    printf("Orginal Array:\n");
    printArray(&arr, 10);

    insertionSort(&arr, 10);
    printf("After insertion sort:\n");
    printArray(&arr, 10);

    for(int i = 0; i < 9; i++){
        assert(arr[i] <= arr[i + 1]);
    }
    printf("=======Assertion succesful, end of test two=============\n");
    free(arr);

    printf("=======================TEST THREE=======================\n");
    bigArr = malloc(sizeof(int) * 500);
    fillArrayRandom(&bigArr, 500, -10000, 10000);
    insertionSort(&bigArr, 500);
    for(int i = 0; i < 499; i++){
        assert(bigArr[i] <= bigArr[i + 1]);
    }
    printf("=====Assertion succesful, end of test three=============\n");
    free(bigArr);

    printf("=======================TEST FOUR========================\n");
    smallArr = malloc(sizeof(int));
    smallArr[0] = -1;
    printf("Original Array:\n");
    printArray(&smallArr, 1);

    insertionSort(&smallArr, 1);
    printf("After insertion sort:\n");
    printArray(&smallArr, 1);

    assert(smallArr[0] == -1);
    printf("======Assertion succesful, end of test four=============\n");
    free(smallArr);
    
    return 0;
}