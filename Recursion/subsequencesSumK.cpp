#include<iostream>
using namespace std;
void subseq(vector<int> arr,int i,int &sum)
{
    if(i>=arr.size())
    {
        if(sum==0)
            {
                for(auto it: arr)
                    cout<<it<<" ";
            }
        return;
    }
    
}