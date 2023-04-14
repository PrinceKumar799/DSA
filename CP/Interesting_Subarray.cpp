#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,max=INT_MIN,min=INT_MAX;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int temp;
	        cin>>temp;
	        if(temp>max)
	        {
	            max = temp;
	        }
	        if(temp<min)
	        {
	            min = temp;
	        }
	    }
	    if(min<0)
	        cout<<min*max<<" "<<max*max<<endl;
	    else
	        cout<<min*min<<" "<<max*max<<endl;
	}
	return 0;
}
