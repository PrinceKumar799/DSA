#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define rep(i,s,n) for(int i=s;i<n;i++)

ll gcd(ll divisor,ll divident){
    if(divisor==0)
        return divident;
    return gcd(divident%divisor,divisor);
}

ll lcm(ll a, ll b){
    return a*b/gcd(a,b);
}

ll max(ll a, ll b){
    if(a>b)
    return a;
    else 
    return b;
}

char toUpper(char ch){
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

int clearMSB(int a,int i)
{
    return a & ((1<<(i-1))-1);
}

void swap(int &a, int &b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
bool checkBound(int i,int j,int n)
{
    if(i>=0 && i<n && j>=0 && j<n)
    {
        return true;
    }
    else
        return false;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<char>> vec;
    rep(i,0,n)
    {
        vector<char> temp;
        rep(j,0,n)
        {
            char t;
            cin>>t;
            temp.push_back(t);
        }        
        vec.push_back(temp);
    }
    unordered_set<char>s1;
    unordered_set<char>s2;
    rep(i,0,n)
    {
        rep(j,0,n)
        {
            if(i==j || (i+j==n-1))
            {
                s1.insert(vec[i][j]);
            }
            else
            {
                s2.insert(vec[i][j]);
            }
        }        
    }
    if(s1.size()==1 && s2.size()==1 && *s1.begin()!=*s2.begin())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

