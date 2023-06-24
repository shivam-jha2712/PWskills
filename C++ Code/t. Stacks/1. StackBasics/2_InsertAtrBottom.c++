#include <iostream>
#include <stack>

using namespace std;

// Create a insertAtBottom Function
stack<int> insertAtBottom(stack<int> &input, int data)
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

    // Inserting element in original stack
    input.push(data);

    // do the process till temp stack becomes empty
    while (!temp.empty())
    {
        int curr = temp.top();
        temp.pop();
        input.push(curr);
    }

    return input;
}

void insertAtBottom_Recursive(stack<int> &input, int bottom)
{
    if (input.empty()) // base case if input is empty then push bottom
    {
        input.push(bottom);
        return;
    }

    // Self Work - 1
    int curr = input.top();
    input.pop();
    // Assumption that it works fine with all the elements except the top
    // And would be copied easily
    insertAtBottom_Recursive(input, bottom);
    //  Self Work - 2
    input.push(curr);
}

int main()
{
    stack<int> st;

    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    int data = 10;

    // stack<int> result = insertAtBottom(st, data);

    // while (!result.empty())
    // {
    //     int curr = result.top();
    //     result.pop();
    //     cout << curr << endl;
    // }

    insertAtBottom_Recursive(st, data);
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }

    return 0;
}