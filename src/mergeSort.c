/**************************
 * James Busch
 * 01/07/20
 * 
 * Version: 0.03
 * 
 * Merge sort is used in Tim sort so i decided to do it now 
 * so im able to fully test it before making timsort
 * 
 * ***********************/


/************************
 * mergeSort
 * 
 * This function takes the array in and is the only place that will call
 * the merge function, it is done recersivley
 * 
 * in: int **arr, int leftIndex, int rightIndex
 * out: void
 **********************/
#include "mergeSort.h"

void mergeSort(int **arr, int leftIndex, int rightIndex){
    int middleIndex;
    if(leftIndex < rightIndex){
        middleIndex = (leftIndex + rightIndex) / 2;
        mergeSort(arr, leftIndex, middleIndex);
        mergeSort(arr, middleIndex + 1, rightIndex);
    }
    merge(arr, leftIndex, middleIndex, rightIndex);
}

/***********************
 * merge
 * 
 * This is where all of the actual sorting takes place
 * by the mergeSort function breaking down the array recursivly it will start by 
 * taking single sections of the array and sorting them together peice by peice
 *
 * in: int **arr, int startIndex, int middleIndex, int endIndex
 * out: void
 *********************/
void merge(int **arr, int startIndex, int middleIndex, int endIndex){
    int sizeLeft, sizeRight;
    int leftArrIndex, rightArrIndex, initFirstArr;
    sizeLeft = middleIndex - startIndex + 1;
    sizeRight = endIndex - middleIndex;

    int leftArr[sizeLeft], rightArr[sizeRight];

    //These fill up the temp arrays with each half of the given array
    for(int i = 0; i < sizeLeft; i++){
        leftArr[i] = (*arr)[startIndex + i];
    }
    for(int i = 0; i < sizeRight; i++){
        rightArr[i] = (*arr)[middleIndex + 1 + i];
    }

    initFirstArr = startIndex;
    leftArrIndex = 0;
    rightArrIndex = 0;

    //This is where the main part of the sorting comes in
    //This first checks if the number on the left is less than equal to the right num
    //If it is, place that number into the array and increment the index of the left side by 1
    //If it is not, place the number on the right into the array then increment the index of the right array by 1
    //At the end of each loop increment the main arrays counter by 1
    while(leftArrIndex < sizeLeft && rightArrIndex < sizeRight){
        if(leftArr[leftArrIndex] <= rightArr[rightArrIndex]){
            (*arr)[initFirstArr] = leftArr[leftArrIndex];
            leftArrIndex++;
        }else{
            (*arr)[initFirstArr] = rightArr[rightArrIndex];
            rightArrIndex++;
        }
        initFirstArr++;
    }

    //These while loops will put any remaning numbers from either array into the final array
    while(leftArrIndex < sizeLeft){
        (*arr)[initFirstArr] = leftArr[leftArrIndex];
        initFirstArr++;
        leftArrIndex++;
    }

    while(rightArrIndex < sizeRight){
        (*arr)[initFirstArr] = rightArr[rightArrIndex];
        initFirstArr++;
        rightArrIndex++;
    }


}