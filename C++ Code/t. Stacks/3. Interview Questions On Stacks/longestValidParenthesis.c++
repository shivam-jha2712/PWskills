#include <bits/stdc++.h> // HEADER FILE

using namespace std;
// This is for those when the parenthesis have test cases like ())() now here answer is supposed to be 2.

// But the approach that i designed had a flaw and I designed using the same approach as balancedAfterMinimumRemoval Question. Thus we need to make some changes in it.
int longestValidParentheses(string str)
{
    stack<int> st;     // Use a stack to keep track of indices of opening parentheses
    int maxLength = 0; // Variable to store the maximum length of valid parentheses substring

    st.push(-1); // Push -1 as the initial index to mark the start of a potential valid substring

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
        {
            st.push(i); // Push the index of opening parentheses onto the stack
        }
        else
        {
            st.pop(); // Pop the top index (matching opening parentheses) when a closing parentheses is encountered

            if (st.empty())
            {
                st.push(i); // If the stack becomes empty, push the current index to mark the start of a new potential valid substring
            }
            else
            {
                int length = i - st.top(); // Calculate the length of the current valid parentheses substring

                maxLength = max(maxLength, length); // Update the maximum length if necessary
            }
        }
    }

    return maxLength;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    string str;
    cin >> str;

    cout << longestValidParentheses(str);

    return 0;
}