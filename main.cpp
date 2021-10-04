#include <iostream>
#include "./sort/Sort.h"
#include "./homework1/homework1.h"
#include " factorial.h"

int getMax(int a[],int len){
    int max = a[0];
    for(int i=1;i<len;i++){
        if(a[i]>=max)max=a[i];
    }
    return max;
}

int main() {
//    int a[]={3,4,5,7,9,8,1,2,6,11};
//    int len = sizeof(a)/sizeof(a[0]);
    /*
     * 求得最大值
     */
//    int max = getMax(a,len);
//    printf("%d",max);

    /*
     * 冒泡排序
     */

//    maopaoSort(a,len);
//    for(int i=0;i<len;i++){
//        printf("%d ",a[i]);
//    }

    /*
     * 快速排序
     */

//    quickSort(a,0,len-1);
//        for(int i=0;i<len;i++){
//        printf("%d ",a[i]);
//    }

    /*
     * 求阶乘
     */
//    int r=factorial(5);
//    printf("%d",r);

    /*
     * 输出数组
     */
//        for(int i=0;i<len;i++){
//        printf("%d ",a[i]);
//    }
//
//        HeapSort(a,len);
//
//        printf("\n");
//
//    for(int i=0;i<len;i++) {
//        printf("%d ", a[i]);
//    }

    /*
     * 作业1
     */
    int r = factorial_nk(6,3);
    printf("%d",r);
    return 0;
}
