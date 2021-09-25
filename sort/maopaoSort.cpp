//
// Created by zyming on 2021/9/25.
//
#include "Sort.h"

void maopaoSort(int a[],int len){
    int tmp;
    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(a[i]>a[j]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
}