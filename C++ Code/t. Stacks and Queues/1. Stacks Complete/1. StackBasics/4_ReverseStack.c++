#include <iostream>
#include <stack>

using namespace std;

// Create a insertAtBottom Function
void insertAtBottom(stack<int> &input, int data)
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

// Time Complexity - O(N);
// Space Complexity - O(N);

void reverse(stack<int> &st)
{
    stack<int> temp1, temp2;
    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        temp1.push(curr);
    }

    while (!temp1.empty())
    {
        int curr = temp1.top();
        temp1.pop();
        temp2.push(curr);
    }

    while (!temp2.empty())
    {
        int curr = temp2.top();
        temp2.pop();
        st.push(curr);
    }
}

// Time Complexity - O(N^2);
// Space Complexity - O(N);

void reverse_Recursive(stack<int> &input)
{
    if (input.empty())
        return;
    int curr = input.top();
    input.pop();
    reverse_Recursive(input);
    insertAtBottom(input, curr);
}

int main()
{
    stack<int> st;

    st.push(0);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    reverse(st);
    // reverse_Recursive(st);

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }

    return 0;
}
