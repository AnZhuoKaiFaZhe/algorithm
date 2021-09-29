//
// Created by zyming on 2021/9/29.
//
void swap(int& a,int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}
void adjust(int* arr,int idx1,int idx2)
{
    if(nullptr==arr||idx1>=idx2||idx1<0||idx2<0)
        return ;
    int tmp = arr[idx1];  //暂时存放要调整的数据
    for(int idx=idx1*2+1;idx<=idx2;idx=idx*2+1)  //从要调整的数据的左孩子开始比较
    {
        //选出左右孩子中的最大结点
        if(idx+1<=idx2 && arr[idx]<arr[idx+1])
            ++idx;
        if(arr[idx]>tmp)  //不满足大根堆，调整
        {
            arr[idx1] = arr[idx];  //交换，可能破坏子树满足大根堆的性质
            idx1 = idx;  //本来这里要交换的，但时tmp暂时存放了初始arr[idx1]的值，这里每次比较都是和tmp比较,好比交换了，所以可以不用先交换
            //继续向下调整，直到树满足大根堆性质
        }
        else
            break;
    }
    arr[idx1] = tmp;
}
int HeapSort(int arr[],int len){
    if(nullptr==arr||len<=0)
        return -1;
    //数组中顺序存放的数据就对应完全二叉树堆中的对应结点的值，现在调整为大根堆
    for(int idx=len/2-1;idx>=0;--idx)  //从最后一个非叶子结点开始调整为最大堆
    {
        adjust(arr,idx,len-1);  //最后一个非叶子结点和它的孩子比较调整
    }
    //排序，根结点后最后一个结点交换，调整
    for(int idx=len-1;idx>0;--idx)
    {
        swap(arr[0],arr[idx]);  //每次选出一个最大的数放到末尾，也就是数组末尾
        adjust(arr,0,idx-1);  //调整根结点到idx-1个结点为大根堆
    }
    return 0;
}

