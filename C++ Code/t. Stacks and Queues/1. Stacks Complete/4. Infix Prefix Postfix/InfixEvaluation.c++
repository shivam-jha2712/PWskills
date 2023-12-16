#include <bits/stdc++.h> // HEADER FILE

using namespace std;

int calc(int v1, int v2, char op)
{
    if (op == '*')
    {
        return v2 * v1;
    }
    if (op == '^')
    {
        return pow(v2, v1);
    }
    if (op == '+')
    {
        return v2 + v1;
    }
    if (op == '/')
    {
        return v2 / v1;
    }
    return v2 - v1;
}

int precedence(char ch)
{
    if (ch == '^')
        return 3;

    if (ch == '*' || ch == '/')
        return 2;

    if (ch == '+' || ch == '-')
        return 1;

    else
        return -1;
}

int eval(string str)
{
    stack<int> nums;
    stack<char> ops;

    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
        {
            nums.push(str[i] - '0'); // conversion from character to integer
        }
        else if (str[i] == '(')
        {
            ops.push('('); // if ( encountered simply push it in ops stack
        }
        else if (str[i] == ' ')
        {
            continue;
        }

        else if (str[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                char op = ops.top();
                ops.pop();

                int v1 = nums.top();
                nums.pop();
                int v2 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }

            ops.pop(); // if the ops stack is not empty then it must have a '(' which means we need to pop it to get the game over
        }

        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(str[i]))
            {
                char op = ops.top();
                ops.pop();

                int v1 = nums.top();
                nums.pop();
                int v2 = nums.top();
                nums.pop();
                nums.push(calc(v1, v2, op));
            }
            ops.push(str[i]);
        }
    }
    // Clearing the ops stacks and nums stack if something is  left in it.
    while (!ops.empty())
    {
        char op = ops.top();
        ops.pop();

        int v1 = nums.top();
        nums.pop();
        int v2 = nums.top();
        nums.pop();
        nums.push(calc(v1, v2, op));
    }

    return nums.top();
}

int main()
{

    string expression; // expression to be evaluated
    cin >> expression;
    cout << eval(expression);

    return 0;
}