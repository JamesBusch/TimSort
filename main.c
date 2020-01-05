
#include "insertionSort.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    arr = malloc(sizeof(int) * 10);
    int j = 0;
    for(int i = 10; i > 0; i--, j++){
        arr[j] = i;
    }

    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(&arr, 10);

    for(int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}