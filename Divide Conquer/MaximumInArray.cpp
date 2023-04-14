
#include <iostream>

using namespace std;
int max(int arr[],int l,int h)
{
    if(h-l<=1)
    {
        if(arr[h]>=arr[l])
            return arr[h];
        else
            return arr[l];
    }
    int a = max(arr,l,(l+h)/2);
    int b = max(arr,(l+h)/2 +1,h);
    if(a>=b)
        return a;
    else
        return b;
}

int main()
{
    int arr[] = {11,2,3,4,5,6,7,8,9,10};
    int res = max(arr,0,9);
    cout<<res;

    return 0;
}
