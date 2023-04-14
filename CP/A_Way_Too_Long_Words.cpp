#include<iostream>
#include<string>
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        int n = str.length();
        if(str.length()<=10)
        {
            cout<<str<<endl;
        }
        else{
            cout<<str[0]<<str.length()-2<<str[n-1]<<endl;
        }
    }
    return 0;
}