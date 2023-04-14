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
    int n;
    cin>>n;
    vector<int> ones,twos,threes;
    for(int i=1;i<=n;i++)
    {
        int t;
        cin>>t;
        if(t==1)
            ones.push_back(i);
      else if(t==2)
            twos.push_back(i);
        else 
            threes.push_back(i);
    }
    int mi = min(ones.size(),min(twos.size(),threes.size()));
    cout<<mi<<endl;
    for(int i=0;i<mi;i++)
    {
        cout<<ones[i]<<" "<<twos[i]<<" "<<threes[i]<<endl;
    }  
    return 0;
}
