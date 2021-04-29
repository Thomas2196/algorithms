#include <iostream>

#include "sorting/sorting.h"
#include "searching/searching.h"

int main() {

    float arr[] = {10, 7, 8, 9, 1, 5};

    int n = sizeof(arr)/sizeof(arr[0]);
    // quick_sort(arr, 0, n-1);
    //insertionSort(arr, n);
    //bubble_sort(arr, n);
    //merge_sort(arr, 0, n-1);

    printf("Sorted array: \n");
    printArray(arr, n);

    float x = 7;

    //int result = linear_search(arr, n, x);
    //int result = binary_search(arr, 0, n-1, x);

    int result = jump_search(arr, n, x);

    printf("Index of %lf : %d\n", x, result);

    return 0;
}
