#include<iostream>
#include<set>
using namespace std;
int findKthLargetElement(int arr[],int n,int k)
{
    if (n==0 || k==0)
    {
        return INT32_MAX;
    } 
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
    }
    set<int>::iterator itr=s.end();
    while (k--)
    {
        itr--;
    }  
    return *(itr);
}
int main()
{
    int arr[] = {5,6,3,8,1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=0;
    cout<<"Enter the Kth largest element to find: ";
    cin>>k;
    cout<<findKthLargetElement(arr,n,k);
    return 0;
}