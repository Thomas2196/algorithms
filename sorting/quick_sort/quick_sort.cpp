//
// Created by zomer on 28/04/2021.
//

#include "quick_sort.h"


int partition(float arr[], int low, int high){
    float pivot = arr[high];
    int i = low -1;

    for (int j=low; j<=high-1; j++) {
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return i+1;
}

int quick_sort(float arr[], int low, int high) {
    if(low<high){
        int pi= partition(arr, low, high);

        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}