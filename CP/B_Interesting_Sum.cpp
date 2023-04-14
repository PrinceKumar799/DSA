#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> vec;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        sort(vec.begin(),vec.end());
        cout<<vec[n-1]-vec[0] + vec[n-2] - vec[1]<<endl;
    }
    return 0;
}