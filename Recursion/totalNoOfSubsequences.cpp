//given a array find total no of subsequences whose sum = k use one element only one time in a subsequence
#include<bits/stdc++.h>
using namespace std;
int arr[] = {3,1,4,6,7,2,4};
int noOfSubsequnces(int idx,int rem,vector<int>& temp)
{
    if(rem==0)
    {
        for(auto i: temp)
            cout<<i<<" ";
        cout<<endl;
        return 1;
    }
    if(idx==sizeof(arr)/sizeof(arr[0]))
    {
        return 0;
    }

    //pick element at index idx
    int pick=0;
    if(arr[idx]<=rem)
    {
        temp.push_back(arr[idx]);
        pick = noOfSubsequnces(idx+1,rem-arr[idx],temp);
        temp.pop_back();    
    }

    int notpick = noOfSubsequnces(idx+1,rem,temp);
    return pick + notpick;
}
int main()
{
    int k;
    cin>>k;
    vector<int> temp;
    cout<<"Subsequences are: "<<endl;
    cout<<"Total no of subsequences: "<<noOfSubsequnces(0,k,temp);
}