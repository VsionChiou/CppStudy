//
// Created by qms42 on 2020/7/4.
//

#include "bubbleSort.h"

void bubbleSort(int arr[],int length){

    for(int i=0;i< length-1;i++){
        for (int j = 0; j < length-1-i; ++j) {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

            }


        }
    }

}
