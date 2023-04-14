#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st,int count,int n)
{
    if(count == n/2)
    {
        st.pop();
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st,++count,n);
    st.push(temp);
}
void delMid(stack<int> &st,int n)
{
    int count = 0;
    solve(st,count,n);
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    delMid(st,st.size());
    while (!st.empty())
    {
        cout<<st.top()<<"\t";
        st.pop();
    }
    
}