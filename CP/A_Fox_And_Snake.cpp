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


int main()
{
    int n,m;
    cin>>n>>m;
    int changeat = m;
    for(int i=1;i<=n;i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i%2==1 )
            {
                cout<<"#";
            }
            else if(i%4==0 && j==1)
            {
                cout<<"#";
            }
            else if(i%2==0 && i%4!=0 && j==m)
            {
                cout<<"#";
            }
            else
            {
                cout<<".";
            }
        }
        cout<<endl;
        
    }
    return 0;
}
