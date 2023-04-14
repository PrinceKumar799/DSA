#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int low,int high)
{
    int pivot = arr[low];
    int i = low;
    int j=high;
    while(i<j)
    {
    while (arr[i]<=pivot)
    {
        i++;
    }
    while(arr[j]>pivot)
    {
        j--;
    }
    if (i<j)
    {
        swap(&arr[i],&arr[j]);
    }
    }
    swap(&arr[low],&arr[j]);
    return (j);
}
void quickSort(int arr[],int low,int high)
{
    if (low<high)
    {
        int p = partition(arr,low,high);
        quickSort(arr,low,p-1);
        quickSort(arr,p+1,high);
    }
    
}
int main()
{
    int arr[] = {15, 48, 27, 36, 44, 3, 55, 32};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"\n\nUnsorted Array: ";
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
    quickSort(arr, 0, n - 1);
    cout<<"\n\nSorted Array:   ";
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
