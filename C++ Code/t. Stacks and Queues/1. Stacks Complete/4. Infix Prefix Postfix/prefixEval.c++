#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int calc(int v1, int v2, char op)
{
    if (op == '*')
    {
        return v1 * v2;
    }
    if (op == '+')
    {
        return v1 + v2;
    }
    if (op == '-')
    {
        return v1 - v2;
    }
    if (op == '/')
    {
        return v1 / v2;
    }
    return 0;
}

int eval(string str)
{
    stack<int> st;
    for (int i = str.length() - 1; i >= 0; i--)
    {
        char ch = str[i];
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int v2 = st.top();
            st.pop();
            int v1 = st.top();
            st.pop();
            st.push(calc(v1, v2, ch));
        }
    }
    return st.top();
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    cout << eval(str);
                                          
    return 0;
}

// -9+*132 ==  -4