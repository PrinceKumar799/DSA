#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string str;
    char first =str[0];
    char second =str[1];
    int i=0;
    cout<<"Enter the String to remove adjacent duplicay: ";
    cin>>str;
    while(i<str.length())
    {
        first=str[i];
        second=str[i+1];
        if(first==second)
        {
            str.erase(str.begin() + i);
        }
        else
        i++;
    }
    for(auto i: str)
    {
        cout<<i<< " ";
        
    }
}