#include <iostream>
#include<vector>
using namespace std;
int main() {
    int t;
    cin>>t;
	while(t--)
	{
	    int l,k;
	    cin>>l>>k;
	    vector<int> vec;
	    while(k)
	    {
	        int t= l-k;
	        l = l-t;
	        k=k-1;
	        vec.push_back(t);
	        cout<<t<<" "<<l<<" "<<k<<endl;
	    }
	    long long ans=0;
	    for(int i=1;i<vec.size();i++)
	    {
	        ans += abs(vec[i]-vec[i-1]);
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
