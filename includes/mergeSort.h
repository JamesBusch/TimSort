/**************************
 * James Busch
 * 01/07/20
 * 
 * Version: 0.02
 * 
 * This is the header file for mergeSort
 * 
 * ***********************/
#ifndef MERGE_SORT_H_
#define MERGE_SORT_H_

void mergeSort(int **arr, int size);
void merge(int **arr, int startIndex, int middleIndex, int endIndex);
#endif