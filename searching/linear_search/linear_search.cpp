//
// Created by zomer on 28/04/2021.
//

#include "linear_search.h"

int linear_search(float arr[], int n, float x){
    for (int i = 0; i < n; i++) {
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}