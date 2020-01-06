/**************************
 * James Busch
 * 01/06/20
 * 
 * Version: 0.01
 * 
 * Merge sort is used in Tim sort so i decided to do it now 
 * so im able to fully test it before making timsort
 * 
 * ***********************/

void mergeSort(int **arr, int leftIndex, int rightIndex){
    int middleIndex;
    if(leftIndex < rightIndex){
        middleIndex = (leftIndex + rightIndex) / 2;
        mergeSort(arr, leftIndex, middleIndex);
        mergeSort(arr, middleIndex + 1, rightIndex);
    }
    merge(arr, leftIndex, middleIndex, rightIndex);
}

void merge(int **arr, int startIndex, int middleIndex, int endIndex){
    int sizeLeft, sizeRight;
    sizeLeft = middleIndex - startIndex + 1;
    sizeRight = endIndex - middleIndex;

    int leftArr[sizeLeft], rightArr[sizeRight];

    for(int i = 0; i < sizeLeft; i++){
        leftArr[i] = (*arr)[startIndex + i];
    }
    for(int i = 0; i < sizeRight; i++){
        rightArr[i] = (*arr)[middleIndex + 1 + i];
    }

}