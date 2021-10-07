//
// Created by zyming on 2021/10/7.
//

void swap1(int arr[],int i,int j){
    int tmp=arr[i];
    arr[i]=arr[j];
    arr[j]=tmp;
}

void heapify(int arr[],int n,int i){
    if(i>n){
        return ;
    }
    int max=i;
    int c1=2*i+1;
    int c2=2*i+2;
    if(c1<=n&&arr[c1]>arr[max]){
        swap1(arr,c1,max);
        heapify(arr,n,c1);
    }
    if(c2<=n&&arr[c2]>arr[max]){
        swap1(arr,c2,max);
        heapify(arr,n,c2);
    }
}

void build_heap(int arr[],int len){
    for (int i=len/2-1;i>=0;i--){
        heapify(arr,len-1,i);
    }
}

void heapSort_Thelight(int a[],int len){
    build_heap(a,len);
    for(int i=len-1;i>=0;i--){
        swap1(a,i,0);
        heapify(a,i-1,0);
    }
}