//
// Created by zomer on 28/04/2021.
//

#include "binary_search.h"

int binary_search(float arr[], int l, int r, float x){

    bubble_sort(arr, r+1);

    if(r>=1){
        int mid = l+(r-1)/2;

        if(arr[mid]==x){
            return mid;
        }
        if(arr[mid]>x){
            return binary_search(arr, l, mid-1, x);
        }
        return binary_search(arr, mid+1, r, x);
    }
    return -1;
}