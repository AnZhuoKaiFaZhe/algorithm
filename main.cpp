#include <iostream>

int getMax(int a[],int len){
    int max = a[0];
    for(int i=1;i<len;i++){
        if(a[i]>=max)max=a[i];
    }
    return max;
}

int main() {
    int a[10]={3,4,5,7,9,8,1,2,6,11};
    int len = sizeof(a)/sizeof(int);
//    int max = getMax(a,len);
//    printf("%d",max);

    return 0;
}
