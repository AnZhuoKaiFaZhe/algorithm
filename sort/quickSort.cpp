//
// Created by zyming on 2021/9/25.
//
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
