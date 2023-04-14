#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define rep(i,s,n) for(int i=s;i<n;i++)

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
// int main()
// {
//     int t;mask=0;
//     cin>>t;
//     rep(i,0,2)
//     {
//         int p;
//         cin>>p;
//         while (p--)
//         {
//             int a;
//             cin>>a;
//             if(mask & (1<<(a-1)))
//             {
//                 continue;
//             }
//             else{
//                 mask = mask | (1<<(a-1));
//             }
//         }
        
//     }
//     // printBinary(mask);
//     // printBinary((1<<(t))-1);
//     // printBinary(mask ^ ((1<<(t))-1));
//     if((mask ^ ((1<<(t))-1)) == 0)
//     {
//         cout<<"I become the guy."<<endl;
//     }
//     else{
//         cout<<"Oh, my keyboard!"<<endl;
//     }
//     return 0;
// }


int main()
{
    int n;
    cin>>n;
    set<int>s;
     rep(i,0,2)
    {
        int p;
        cin>>p;
        while (p--)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
    }
    if(s.size() == n)
    {
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}
