#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() {
	int t;
    cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> vec;
	    rep(i,0,n)
        {
            int t;
            cin>>t;
            vec.push_back(t);
        }
        int min = INT32_MAX;
        rep(i,0,n)
        {
            rep(j,i,n)
            {
                
            }
        }
	}
	return 0;
}
