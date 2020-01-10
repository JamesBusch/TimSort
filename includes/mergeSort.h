/**************************
 * James Busch
 * 07/01/20
 * 
 * Version: 0.03
 * 
 * This is the header file for mergeSort
 * 
 * ***********************/
#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

void mergeSort(int **arr, int leftIndex, int rightIndex);
void merge(int **arr, int startIndex, int middleIndex, int endIndex);
#endif
