#include <iostream>
#include <stack>

using namespace std;

bool balancedParenthesis(stack<char> st)
{
    int count = 0;
    while (st.size() != 0)
    {
        if (st.top() == '(')
        {
            count++;
            st.pop();
        }
        else if (st.top() == ')' && count > 0)
        // Here is a catch that we need to even check ki agar we have an opening parenthesis already available to be reduced then only we will reduce the counter or else we won't.
        {
            count--;
            st.pop();
        }
    }

    if (count = 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    stack<char> st;

    st.push('(');
    st.push('(');
    st.push(')');
    st.push('(');
    st.push(')');
    st.push('(');
    st.push(')');
    st.push(')');
    st.push('(');
    st.push(')');

    cout << balancedParenthesis(st);

    return 0;
}