#include <bits/stdc++.h> // HEADER FILE

using namespace std;

string eval(string &pre)
{
    stack<string> st; // Create a stack to store intermediate expressions

    reverse(pre.begin(), pre.end()); // Reverse the input string

    for (int i = 0; i < pre.size(); i++)
    {
        if (isdigit(pre[i])) // If the character is a digit
        {
            st.push(to_string(pre[i] - '0')); // Convert the digit to a string and push it onto the stack
        }
        else // If the character is an operator
        {
            string v1 = st.top(); // Get the top expression from the stack
            st.pop();

            string v2 = st.top(); // Get the second expression from the stack
            st.pop();

            string newexp = v1 + v2 + pre[i]; // Combine the two expressions and the operator
            st.push(newexp);                  // Push the new expression onto the stack
        }
    }

    return st.top(); // The top of the stack contains the final evaluated expression
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