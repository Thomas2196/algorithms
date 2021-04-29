//
// Created by zomer on 28/04/2021.
//

#include "utilities.h"

void swap(float* a, float* b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}


void printArray(float arr[], int size_array){
    for (int i = 0; i < size_array; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}