//
// Created by zomer on 28/04/2021.
//

#include "merge_sort.h"

void merge(float arr[], int l, int m, int r){
    int n1 = m-l+1;
    int n2 = r-m;

    float temp_left[n1], temp_right[n2];

    for (int i = 0; i < n1; i++) {
        temp_left[i] = arr[l+i];
    }
    for (int j = 0; j < n2; j++) {
        temp_right[j] = arr[m+1+j];
    }

    int i=0;
    int j=0;
    int k=l;

    while (i<n1 && j<n2) {
        if(temp_left[i]<=temp_right[j]) {
            arr[k] = temp_left[i];
            i++;
        } else {
            arr[k] = temp_right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = temp_left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = temp_right[j];
        j++;
        k++;
    }
}

void merge_sort(float arr[],int l,int r){
    //r-=1;

    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;

    merge_sort(arr,l,m);
    merge_sort(arr,m+1,r);
    merge(arr,l,m,r);
}