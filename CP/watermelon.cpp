#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   map<string,int> m;
   while (t--)
   {
    string str;
    cin>>str;
    if(m[str])
    {
        cout<<str<<m[str]<<endl;
        m[str]++;
    }
    else
    {
        cout<<"OK"<<endl;
        m[str]=1;
    }
   }
   
}
