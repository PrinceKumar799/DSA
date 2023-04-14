#include<bits/stdc++.h>
#define ll long long
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}

char toUpper(char ch)
{
    return ch & '_';  //~(1<<5) binary rep of '_' ASCII
}

char toLower(char ch)
{
    return ch | ' '; 
}

bool checkEven(int a)
{
    if(a & 1)
        return false;
    else
        return true;
}

bool checkOdd(int a)
{
    if(a & 1)
        return true;
    else
        return false;
}

//n>>1 divides n by 2
//n<< multiplies n by 2
void printBinary(int a)
{
    for (int i = 31; i >=0; i--)
    {
        cout<<((a>>i)&1);
    }
    cout<<endl;
    
}
void setOrUnset(int a)
{
    int i=0;
    cin>>i;
    if((a & 1<<i) !=0)
    {
        cout<<"Set Bit"<<endl;
    }
    else
        cout<<"Unset Bit"<<endl;
}

int setBit(int a)
{
    int i;
    cin>>i;
    return (a | 1<<i);
}

int unsetBit(int a)
{
    int i;
    cin>>i;
    return (a & ~(1<<i));
}

int toogleBits(int a)
{
    int i;
    cin>>i;
    return (a ^ 1<<i);
}
int countSetBits(int a)
{
    int cnt =0;
    for (int i = 0; i < 31; i++)
    {
        if(a & 1<<i)
        {
            cnt++;
        }
    }
    return cnt;  
}

int countUnsetBits(int a)
{
    int cnt=0;
    for(int i=0;i<31;i++)
    {
        if((a & (1<<i))==0)
            cnt++;
    }
    return cnt;
}
//1010101010101
//1111000000000
int clearLSB(int a)    
{
    int i;
    cin>>i;
    return a & (~((1<<(i+1))-1));
}

// int clearMSB(int a,int i)
// {
//     return a & ()
// }
int main()
{
    ll n,k,ans;
    cin>>n>>k;
    if(n&1)
    {
        if(k<=(n+1)/2)
        {
            ans = 1 + (k-1)*2;
        }
        else{
            ans = 2 + (k- (n+1)/2 - 1) + (k- (n+1)/2 - 1);
        }
    }
    else{
        if(k<=n/2)
        {
            ans = 1 + (k-1)+(k-1);
        }
        else{
            ans = 2 + (k- n/2 - 1)+(k- n/2 - 1);
        }
    }
    cout<<ans<<endl;
    return 0;
}

