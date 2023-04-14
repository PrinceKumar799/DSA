#include <iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,countCons=0;
        string s;
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='a' && s[i]!='e'&& s[i]!='i'&& s[i]!='o'&& s[i]!='u')
                countCons++;
            else
                countCons=0;
            if(countCons>=4)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(countCons<4)
        {
            cout<<"YES"<<endl;
        }
    }
	return 0;
}
