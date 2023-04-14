#include<bits/stdc++.h>
using namespace std;
vector<int> vec={1,3,4,5,6,7,72};
bool solve(int idx,int sum)
{
    if(sum==0)
    {
        return true;
    }
    if(idx>vec.size())
    {
        return false;
    }
    return solve(idx+1,sum) || solve(idx+1,sum-vec[idx]);
}

int main()
{
    int sum = 0;
    for(int i=0;i<vec.size();i++)
    {
        sum += vec[i];
    }
    if(sum&1)
    {
        cout<<"No"<<endl;
    }
    else{
        if(solve(0,sum/2))
        {
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}