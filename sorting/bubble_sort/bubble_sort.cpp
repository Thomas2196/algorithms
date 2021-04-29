//
// Created by zomer on 28/04/2021.
//

#include "bubble_sort.h"

void bubble_sort(float arr[], int n, bool down) {

    for (int i = 0; i < n-1; ++i) {
        for (int j = 0; j < n-i-1; ++j) {
            if(arr[j] > arr[j+1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}