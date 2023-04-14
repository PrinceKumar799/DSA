#include<bits/stdc++.h>
using namespace std;
#define ll  long long
#define vi vector<int>
#define rep(i,s,n) for(int i=s;i<n;i++)
const int M=1e9+7;
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

int setBit(int a,int i)
{
    return (a | 1<<i);
}

int unsetBit(int a,int i)
{
    return (a & ~(1<<i));
}

int toogleBits(int a,int i)
{
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

bool isPrime(ll n)
{
    if(n==1)
        return false;
    
    for (ll i = 2; i*i <= n; i++)
    {
        if(n%i==0)
            return false;            
    }
    return true;    
}

ll power(ll a,int b)
{
    ll res=1;
    while(b)
    {
        if(b&1)   
        {
            res *= a;
        }
        a *= a; 
        b = b>>1;
    }
    return res;
}
ll binExp(ll a,ll b,int M)
{
    ll res=1;
    while (b)
    {
        if(b& 1)
        {
            res = (res*a)%M;
        }
        a = (a*a)%M;
        b = b>>1;
    }
    return res;  
}

// vector<bool> arr(M,true);
// const int N = 1e7 + 10;
// void seive()
// {
//     arr[0]=false;
//     arr[1]=false;
//    for(int i=2;i<=N;i++)
//    {
//     if(arr[i])
//     {
//         for(int j=i*2;j<=N;j+=i)
//         {
//             arr[j]=false;
//         }
//     }
//    } 
//    for(int i=0;i<100; i++)
//    {
//     cout<<i<<" "<<arr[i]<<endl;
//    }
// }


int main()
{
    seive();
    return 0;
}

// C++ program for the above approach

#include <bits/stdc++.h>
#define MAX 100001
int mark[MAX];
set<int> s;
void sieve()
{
    s.i
	for (int i = 1; i < MAX; i++)
		mark[i] = i;
	for (int i = 4; i < MAX; i = i + 2)
		mark[i] = 2;

	for (int i = 3; i * i < MAX; i++)
		if (mark[i] == i) {
			for (int j = i * i; j < MAX;
				j = j + i) {
				if (mark[j] == j)
					mark[j] = i;
			}
		}
}

// Function to find the distinct
// prime factors
void DistPrime()
{
	for (int i = 1; i < MAX; i++) {

		int idx = 1;
		int x = i;

		// Push all distinct of x
		// prime factor in v[x]
		if (x != 1)
			v[i].push_back(mark[x]);

		x = x / mark[x];

		while (x != 1) {

			if (v[i][idx - 1]
				!= mark[x]) {

				// Pushback into v[i]
				v[i].push_back(mark[x]);

				// Increment the idx
				idx += 1;
			}

			// Update x = (x / mark[x])
			x = x / mark[x];
		}
	}
}

// Function to get the distinct
// factor count of arr[]
void getFactorCount(int arr[],
					int N)
{
	// Precompute the smallest
	// Prime Factors
	sieve();

	// For distinct prime factors
	// Fill the v[] vector
	DistPrime();

	// Count of Distinct Prime
	// Factors of each array element
	for (int i = 0; i < N; i++) {
		cout << (int)v[arr[i]].size()
			<< " ";
	}
}a

// Driver Code
int main()
{
	int arr[] = { 6, 9, 12 };
	int N = sizeof(arr) / sizeof(arr[0]);

	getFactorCount(arr, N);

	return 0;
}
