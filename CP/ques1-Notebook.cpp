#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    // vector<int> vec;
    int n;
    cout<<"No of blocks: ";
    cin>>n;
    // int ans[n];
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        m[t]++;
    }
    int odds=0;
    // int intersection=0;
    for(auto it: m)
    {
        if(it.second & 1)
        {
            odds++;
            // intersection=it.first;
        }
    }  
    if((odds==1 && (n&1)))
    {
        cout<<"Yes"<<endl;
    }
    else if(odds==0 && (!(n&1)))
        cout<<"Yes"<<endl;
    else
    {
        cout<<"No"<<endl;
        return 0;
    }  
    // int i=0;
    // for(auto it: m)
    // {
    //     for(int j=0;j<it.second;)
    //     {
    //         ans[i]=it.first;
    //         ans[n-1-i] = it.first;
    //         j-=2;
    //         if(n&1)
    //         {
                
    //         }
    //     }
    // }
    // // ans[n/2]=intersection;
    // for(int i=0;i<n;i++)
    // {
    //     cout<<ans[i]<<" ";
    // } 
}