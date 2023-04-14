#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> st,int temp)
{
    if(st.empty() || st.top()>temp)
    {
        st.push(temp);
        return;
    }
    else
    {
        temp = st.top();
        st.pop();
        solve(st,temp);
        st.push(temp);
    }
}
void sort(stack<int> st)
{
    int temp = st.top();
    st.pop();
    sort(st);
    solve(st,temp);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(1);
    st.push(7);
    st.push(7);
    st.push(0);
    cout<<"done";
    sort(st);
    cout<<st.top()<<endl;
    return 0;
}