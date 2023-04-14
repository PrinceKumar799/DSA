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
        string str;
        cin>>str;
        if(n!=5)
        {
            cout<<"NO"<<endl;
            continue;
        }
        unordered_map<char,bool> m;
        for (int i = 0; i < n; i++)
        {
            m[str[i]] = true;
        }
        if (!m['T'])
        {
            cout<<"NO"<<endl;
        }
        else if (!m['i'])
        {
            cout<<"NO"<<endl;
        }
        else if (!m['m'])
        {
            cout<<"NO"<<endl;
        }
        else if (!m['u'])
        {
            cout<<"NO"<<endl;
        }
        else if (!m['r'])
        {
            cout<<"NO"<<endl;
        }
        else
            cout<<"YES"<<endl;
    }
    return 0;
}