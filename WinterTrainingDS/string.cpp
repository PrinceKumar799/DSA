#include<iostream>
#include "string.h"
using namespace std;
class String
{
public:
    char *str;
    int n;
    String(char *str,int n);
    void concat(String s)
    {
        int j=0;
        while (str[j] != '\0')
        {
            j++;
        }
        int i=0;
        while (s.str[i]!='\0' )
        {
            str[j] = s.str[i];
            i++;
            j++;
        } 
        str[j] = '\0';
    }
    void copy(String s)
    {
        int j=0;
        while (s.str[j] != '\0')
        {
            str[j] = s.str[j];
            j++;
        }
        str[j] = s.str[j];
    }
    void printString()
    {
        int i=0;
        while (str[i]!='\0')
        {
            cout<<str[i];
            i++;
        }
        cout<<endl;
        
    }
    
};

String::String(char *s,int n)
{
    str = new char[n+1];
    int i=0;
    while (s[i]!='\0')
    {
        str[i] = s[i];
        i++;
    }
    str[i] = s[i];
}


int main()
{
    char *strArr = new char[256];
    cin>>strArr;
    int n=0;
    while (strArr[n]!='\0')
    {
        n++;
    }
    String s1(strArr,n);
    cin>>strArr;
    n=0;
    while (strArr[n]!='\0')
    {
        n++;
    }
    String s2(strArr,n);
    cout<<"s1: ";
    s1.printString();
    cout<<"s1 concatinated: ";
    s1.concat(s2);
    s1.printString();
    s2.copy(s1);
    cout<<"s1 copied in s2: ";
    s2.printString();
}
