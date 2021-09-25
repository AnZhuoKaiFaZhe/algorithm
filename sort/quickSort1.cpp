//
// Created by zyming on 2021/9/25.
//
#include "Sort.h"

void quickSort1(int a[],int l,int r){
    if(l>=r){
        return;
    }
    int povit=a[l],i=l+1,mid=l;
    while (i++<r){
        if(a[i]<povit){
            mid++;
        }
    }
    quickSort1(a,l,mid-1);
    quickSort1(a,mid+1,r);
}
