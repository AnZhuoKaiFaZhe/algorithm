#include <iostream>

int getMax(int a[],int len){
    int max = a[0];
    for(int i=1;i<len;i++){
        if(a[i]>=max)max=a[i];
    }
    return max;
}

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

//void quickSort(int a[],int l,int r){
//    if(l>=r){
//        return;
//    }
//    int povit=a[l],i=l+1,mid=l;
//    while (i++<r){
//        if(a[i]<povit){
//            mid++;
//        }
//    }
//    quickSort(a,l,mid-1);
//    quickSort(a,mid+1,r);
//}

int partition(int *arr, int L, int R)
{
    int i, j = L;
    int pivot = arr[R];
    for (i = L; i < R; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            j++;
        }
    }
    int temp = arr[R];
    arr[R] = arr[j];
    arr[j] = temp;
    return j;
}
void quickSort(int *arr, int L, int R)
{
    if (L < R) {
        int m = partition(arr, L, R);
        quickSort(arr, L, m - 1);
        quickSort(arr, m + 1, R);
    }


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

    quickSort(a,0,len-1);
        for(int i=0;i<len;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
