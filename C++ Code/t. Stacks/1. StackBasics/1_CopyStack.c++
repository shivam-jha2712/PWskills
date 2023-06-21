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

int main()
{
    stack<int> st;

    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    stack<int> result = copyStack(st);

    while (!result.empty())
    {
        int curr = result.top();
        result.pop();
        cout << curr << endl;
    }

    return 0;
}