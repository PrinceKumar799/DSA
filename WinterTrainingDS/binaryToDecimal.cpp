#include<iostream>
using namespace std;
int pow(int a,int b)
{
    int res=1;
    while(b)
    {
            res *= a;
            b--;
    }
    return res;
}
int main()
{
    int binary=11100;
    int decimal=0;
    while(binary)
    {
        decimal += (binary%10)*pow(2,i);
        binary = binary/10;
    }
    cout<<decimal<<endl;
    
}