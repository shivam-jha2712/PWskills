#include <iostream>
#include <stack>

using namespace std;

// Create a copyStack Function
stack<int> copyStack(stack<int> &input)
{

    // Create a temporary stack
    stack<int> temp;
    // do the process till input stack becomes empty
    while (!input.empty())
    {
        int curr = input.top();
        input.pop();
        temp.push(curr);
    }

    // Create a resultant stack
    stack<int> result; //
    // do the process till temp stack becomes empty
    while (!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        result.push(curr);
    }

    return result;
}

// Recursive Function of copyStack
void copyStack_recursive(stack<int> &st, stack<int> &result)
{
    // Base case
    if (st.empty())
    {
        return;
    }
    // Self Work - 1
    int curr = st.top();
    st.pop();
    // Assumption that it works fine with all the elements except the top
    // And would be copied easily
    copyStack_recursive(st, result);
    //  Self Work - 2
    result.push(curr);
}

int main()
{
    stack<int> st;

    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    // Iterative Function call
    // stack<int> result = copyStack(st);

    // Recursive Function call
    stack<int> result;
    copyStack_recursive(st, result);

    while (!result.empty())
    {
        int curr = result.top();
        result.pop();
        cout << curr << endl;
    }

    return 0;
}