#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string InfixToPostfix(string s)
{
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'A'))
        {
            res = res + s[i];
        }

        else if (s[i] == '(')
            st.push(s[i]);

        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
                res += st.top();
            st.pop();
            if (!st.empty())
            {
                st.pop();
            }
        }

        else
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
                res += st.top();
            st.pop();
        }
        st.push(s[i]);
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    return res;
}
int main()
{
    cout << InfixToPostfix("A*B+C/D");
    return 0;
}
