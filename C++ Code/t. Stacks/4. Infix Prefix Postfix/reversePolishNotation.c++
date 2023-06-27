#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int evalRPN(vector<string> &tokens)
{
    stack<int> st; // Create a stack to store operands

    // Iterate through each token in the input expression
    for (const string &token : tokens)
    {
        if (token == "+" || token == "-" || token == "*" || token == "/")
        { // If the token is an operator
            // Pop the top two operands from the stack
            int num2 = st.top();
            st.pop();
            int num1 = st.top();
            st.pop();

            // Perform the operation on the operands and push the result back to the stack
            int result;
            if (token == "+")
            {
                result = num1 + num2; // Addition
            }
            else if (token == "-")
            {
                result = num1 - num2; // Subtraction
            }
            else if (token == "*")
            {
                result = num1 * num2; // Multiplication
            }
            else if (token == "/")
            {
                result = num1 / num2; // Division
            }
            st.push(result);
        }
        else
        { // If the token is an operand
            // Convert the token to an integer and push it onto the stack
            st.push(stoi(token));
        }
    }

    // The final result is the top of the stack
    return st.top();
}

int main()
{
    vector<string> tokens = {"2", "1", "+", "3", "*"};
    int result = evalRPN(tokens);
    cout << "Result: " << result << endl;

    return 0;
}
