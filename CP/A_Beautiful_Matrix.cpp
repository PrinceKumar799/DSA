#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    if(a>b)
    return a;
    else 
    return b;
}

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

int main()
{
    int row,column;
    for(int i=0;i<5;i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int temp;
            cin>>temp;
            if(temp==1)
            {
                row = i;
                column = j;
            }
        }    
    }
    cout<<abs(row-2)+abs(column-2);
    return 0;
}