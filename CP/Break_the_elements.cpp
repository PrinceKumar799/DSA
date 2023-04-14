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
        int odds=0,evens=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(x&1)
            {
                odds++;
            }
            else
            {
                evens++;
            }
        }
        if(odds==0 || evens==0)
        {
            cout<<0<<endl;
        }
        else
            cout<<evens<<endl;
	    
	}
	return 0;
}
