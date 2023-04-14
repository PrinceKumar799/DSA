#include<iostream>
using namespace std;

//brute force
void primefact(int t)
{
    for (int i = 2; i <=t; i++ )
    {
        if (t%i==0)
        {
            int cnt =0;
            while (t%i==0)
            {
                cnt++;
                t /= i;
            }
            cout<<i<<"^"<<cnt<<" ";           
        }
        
    } 
}

//optimized 
void primefactOptimized(int t)
{
    for (int i = 2; i*i <=t; i++ )
    {
        if (t%i==0)
        {
            int cnt =0;
            while (t%i==0)
            {
                cnt++;
                t /= i;
            }
            cout<<i<<"^"<<cnt<<" ";           
        }
        
    }
    if(t>1)
    {
        cout<<t;
    } 
}

int main()
{
    int n;
    cin>>n;
    primefactOptimized(n);
}