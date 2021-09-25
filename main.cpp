#include <iostream>
#include "./sort/Sort.h"

int getMax(int a[],int len){
    int max = a[0];
    for(int i=1;i<len;i++){
        if(a[i]>=max)max=a[i];
    }
    return max;
}

int main() {
    int a[]={3,4,5,7,9,8,1,2,6,11};
    int len = sizeof(a)/sizeof(a[0]);
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
     * 快排自写
     */

    quickSort1(a,0,len-1);

    return 0;
}
