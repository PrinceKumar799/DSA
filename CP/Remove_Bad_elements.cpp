#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
        cin>>n;
        unordered_map<int,int> um;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            um[x]++;
        }
        int max=0;
        for(auto it: um)
        {
            if(it.second>max)
            {
                max=it.second;
            }
        }
        cout<<n-max<<endl;
	    
	}
	return 0;
}
