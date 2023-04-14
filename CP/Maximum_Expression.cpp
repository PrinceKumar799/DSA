#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string str;
	    cin>>str;
	    vector<char> vec;
        stack<char> st;
	    int plus=0,minus=0;
	    for(int i=0;i<str.length();i++)
	    {
	        if(str[i]=='+')
	        plus++;
	        else if(str[i]=='-')
	        minus++;
	        else
	            vec.push_back(str[i]);
	    }
	    sort(vec.begin(),vec.end());
        st.push(vec[0]);
	    for(int i=1;i<vec.size();)
	    {
            if(st.top()!='+' && st.top()!='-')
            {
            if( minus)
	        {
	           	st.push('-');
                minus-=1;
	        }
	        else if(plus)
	        {
	            st.push('+');
                plus-=1;
	        }
            else 
	        {
	            st.push(vec[i]);
	            i++;
	        }
            }
	        else 
	        {
	            st.push(vec[i]);
	            i++;
	        }
	    }
        while (!st.empty())
        {
            cout<<st.top();
            st.pop();
        }
        cout<<endl;
	}
	return 0;
}
