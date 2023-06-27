#include <bits/stdc++.h>
using namespace std;

int precedence(char ch)
{
    // function to return the precedence of the operators
    if (ch == '^')
        return 3;
    else if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

int calculate(int val1, int val2, char op)
{
    // function to apply the operator on val1 and val2
    if (op == '^')
        return pow(val2, val1);
    if (op == '*')
        return val2 * val1;
    if (op == '/')
        return val2 / val1;
    if (op == '+')
        return val2 + val1;
    return val2 - val1;
}

int evaluate_infix_expression(string expression)
{
    // function to evaluate an infix expression
    stack<int> nums;  // stack to store the operands
    stack<char> oper; // stack to store the operators

    // traversing through the expression
    for (auto &ch : expression)
    {
        if (isdigit(ch))
        {
            // if the char is a digit, insert it into the operand stack
            nums.push(ch - '0');
        }
        else if (ch == '(')
        {
            // if the char is an opening bracket, push it into the operator stack
            oper.push('(');
        }
        else if (ch == ')')
        {
            // loop till you don't encounter the corresponding opening bracket
            while (oper.top() != '(')
            {
                // take out the operator on the top of the operator stack
                char op = oper.top();
                oper.pop();

                // take out the top 2 values from the operand stack
                int val1 = nums.top();
                nums.pop();
                int val2 = nums.top();
                nums.pop();

                // push the result of applying the operator on val1 and val2 into the nums stack
                nums.push(calculate(val1, val2, op));
            }
            oper.pop();
        }
        else
        {
            // loop till the operator on top of operation stack has a higher precedence than the current operator
            while (oper.size() && precedence(oper.top()) >= precedence(ch))
            {
                // take out the operator on the top of the operator stack
                char op = oper.top();
                oper.pop();

                // take out the top 2 values from the operand stack
                int val1 = nums.top();
                nums.pop();
                int val2 = nums.top();
                nums.pop();

                // push the result of applying the operator on val1 and val2 into the nums stack
                nums.push(calculate(val1, val2, op));
            }
            oper.push(ch);
        }
    }

    // loop till you have operations left to perform
    while (oper.size())
    {
        // take out the operator on the top of the operator stack
        char op = oper.top();
        oper.pop();

        // take out the top 2 values from the operand stack
        int val1 = nums.top();
        nums.pop();
        int val2 = nums.top();
        nums.pop();

        // push the result of applying the operator on val1 and val2 into the nums stack
        nums.push(calculate(val1, val2, op));
    }
    return nums.top();
}

int main()
{

    string expression; // expression to be evaluated
    cin >> expression;
    cout << evaluate_infix_expression(expression);

    return 0;
}