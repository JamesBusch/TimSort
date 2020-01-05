/**************************
 * James Busch
 * 01/05/20
 * 
 * Version: 0.01
 * 
 * Insertion sort is used in TimSort so I put it in its own file
 * just to make everything a little bit cleaner
 * 
 * ***********************/


#include "insertionSort.h"
#include <stdio.h>
void insertionSort(int **arr, int size){
    int index;
    int backIndex;
    int holder;
    //int comparision;
    for(index = 1; index < size; index++){
        holder = (*arr)[index];
        backIndex = index - 1;
        while(backIndex >= 0 && (*arr)[backIndex] > holder){
            (*arr)[backIndex + 1] = (*arr)[backIndex];
            backIndex--;
        }
        (*arr)[backIndex + 1] = holder;
    }
}
