#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--)
	{
	    int m,n;
	    cin>>m>>n;
	    vector<int> shopping;
	    vector<int> avail;
	    for(int i=0;i<m;i++)
	    {
	        int t;
	        cin>>t;
	        avail.push_back(t);
	    }
	    for(int i=0;i<n;i++)
	    {
	        int t;
	        cin>>t;
	        shopping.push_back(t);
	    }
	    sort(avail.begin(),avail.end());
	    sort(shopping.begin(),shopping.end()); //m avail n shopping
	    for(int i=0,j=0;i<m;i++)
	    {
	            if(j<n && shopping[j]==avail[i])
	            {
	                shopping[j]=0;
                    avail[i] =0;
                    j++;
	            }
	    }
	    bool flag = false;
	    for(int i=0;i<n;i++)
	    {
	        if(shopping[i]!=0)
	       {
	           flag=true;
	           break;
	       }
	    }
	    if(flag)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
