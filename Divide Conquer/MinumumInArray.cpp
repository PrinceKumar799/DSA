#include<iostream>
using namespace std;
int min(int arr[],int l,int h)
{
    //base case
    if(h-l<=1)
    {
        if(arr[h]<=arr[l])
            return arr[h];
        else
            return arr[l];
    }

    int a = min(arr,l,(l+h)/2);
    int b = min(arr,(l+h)/2 +1,h);
    if (a<=b)
    {
        return a;   
    }
    else
    {
        return b;
    }  
}
int main()
{
    int arr[] = {3,5,5,2,6,8,9,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = min(arr,0,n-1);
    cout<<res;
    return 1;
}