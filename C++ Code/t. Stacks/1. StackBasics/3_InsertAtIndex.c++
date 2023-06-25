#include <iostream>
#include <stack>

using namespace std;

// Create a insertAtBottom Function
void insertAtIndex(stack<int> &input, int data, int index)
{
    int n = input.size();
    int count = 0;
    // Create a temporary stack
    stack<int> temp;
    // do the process till input stack becomes empty
    while (count < n - index)
    {
        count++;
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

void insertAtIndex_Recursive(stack<int> &input, int data, int index)
{
    int n = input.size();
    int pos = n - index;
    if (st.size() == pos) // base case if input is empty then push bottom
    {
        input.push(data);
        return;
    } 

    // Self Work - 1
    int curr = input.top();
    input.pop();
    // Assumption that it works fine with all the elements except the top
    // And would be copied easily
    insertAtBottom_Recursive(input, data, index);
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

    int idx = 3;

    insertAtIndex(st, data, idx);

    while (!st.empty())
    {
        int curr = st.top();
        st.pop();
        cout << curr << endl;
    }

    // insertAtIndex_Recursive(st, data, idx);
    // while (!st.empty())
    // {
    //     int curr = st.top();
    //     st.pop();
    //     cout << curr << endl;
    // }

    return 0;
}