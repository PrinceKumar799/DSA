#include <iostream>
#include <Stack>
using namespace std;

void insert(stack<int> &st, int val)
{
    if (st.empty() || st.top() <= val)
    {
        st.push(val);
        return;
    }
    int top = st.top();
    st.pop();
    insert(st, val);
    st.push(top);
}
void sort(stack<int> &st)
{
    if (st.size() <= 1)
        return;
    int top = st.top();
    st.pop();
    sort(st);
    insert(st, top);
}
int main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    sort(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    return 1;
}