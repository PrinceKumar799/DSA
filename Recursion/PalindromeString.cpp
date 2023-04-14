#include<iostream>
#include<string>
using namespace std;
bool checkPalindrome(string str, int i)
{
    int n= str.length();
    if(i>n/2)
    {
        return true;
    }
    if(str[i]!=str[n-1-i])
        return false;
    return checkPalindrome(str,i+1);
}

int main()
{
    cout<<checkPalindrome("MADAMA",0);
    return 1;
}