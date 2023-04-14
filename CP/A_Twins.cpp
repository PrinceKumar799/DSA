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
    int n;
    cin>>n;
    vector<int> vec;
    int total=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        vec.push_back(temp);
        total += temp;
    }
    sort(vec.begin(),vec.end());
    int taken=0,cnt=0;
    for(int i=vec.size()-1;i>=0;i--)
    {
        if(taken<=total/2)
        {
            taken += vec[i];
            cnt++;
        }
        else
            break;
    }
    cout<<cnt<<endl;
    return 0;
}