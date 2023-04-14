//81 89 9 11 14 76 54 22
#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int i,int n)
{
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+ 2;
    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    if(right<n && arr[right]>arr[largest])
    {
        largest = right;
    }
    if(i!=largest)
    {
        int temp = arr[n-1];
        arr[n-1] = arr[i];
        arr[i] = temp;
        heapify(arr,0,n);
    }
}

int main()
{
    int arr[] = {81,89,9,11,14,76,54,22};
    heapify(arr,0,sizeof(arr)/sizeof(arr[0]));
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}