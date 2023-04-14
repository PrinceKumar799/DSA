#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<string>
using namespace std;
long long gcd(long long  a, long long  b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(long long  a, long long  b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,count=0;
        c1in>>n;
        for(long long i=1;i<=n;i++)
        {
           count++;
           if(2*i <= n)
           {
            count++;
            count++;
           }
           if(3*i<=n)
           {
            count++;
            count++;
           }
        }
        cout<<count<<endl;
    }
    return 0;
}