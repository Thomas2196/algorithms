//
// Created by zomer on 28/04/2021.
//

#include "jump_search.h"

int jump_search(float arr[], int n, float x){

    bubble_sort(arr, n);

    int step = sqrt(n);

    int prev = 0;

    while (arr[std::min(step, n)-1]<x) {
        prev = step;
        step+= sqrt(n);
        if (prev>=n){
            return -1;
        }
    }

    while (arr[prev]<x){
        prev++;
        if(prev==std::min(step, n)){
            return -1;
        }
    }

    if (arr[prev]==x){
        return prev;
    }

    return -1;
}