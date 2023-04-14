#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        long k;
        bool found = true;
        cin>>n>>k;
        for(int a=1;a<=n;)
        {
            long long cal = (a+k)*(a+1);
            if(cal%4==0)
            {
                if(found)
                {
                    cout<<"YES"<<endl;
                    found = false;
                }
                cout<<a<<" "<<a+1<<endl;
            }
            a = a+2;
        }
        for(int a=1;a<=n;)
        {
            long long cal = a*(a+1+k);
            if(cal%4==0)
            {
                if(found)
                {
                    cout<<"YES"<<endl;
                    found = false;
                }
                cout<<a+1<<" "<<a<<endl;
            }
            a = a+2;
        }
        if(found)
            cout<<"NO"<<endl;
    }
    
}