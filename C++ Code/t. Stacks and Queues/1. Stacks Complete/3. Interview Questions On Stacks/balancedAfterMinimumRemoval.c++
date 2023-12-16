#include <iostream>
#include <stack>

using namespace std;

int balancedParenthesis(string str)
{
    stack<char> st;
    int removal = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push(str[i]); // Push opening parentheses onto the stack
        }
        else
        {
            if (!st.empty())
            {
                st.pop(); // If a closing parenthesis is encountered and the stack is not empty, pop the top element (matching opening parenthesis)
            }
            else
            {
                removal++; // If a closing parenthesis is encountered and the stack is empty, increment the removal count
            }
        }
    }

    return removal + st.size(); // The remaining opening parentheses in the stack are considered unbalanced, so add the count to the removal count
}

int main()
{
    string str;
    cin >> str;
    cout << balancedParenthesis(str);

    return 0;
}

/*

*/