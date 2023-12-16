#include <iostream>
#include <stack> // including the header file used for stack stl implementation

using namespace std;

int main()
{
    stack<int> st; // Create an empty stack of integers

    st.push(1); // Push 1 onto the stack
    st.push(2); // Push 2 onto the stack
    st.push(3); // Push 3 onto the stack
    st.push(4); // Push 4 onto the stack

    cout << st.top() << endl; // Print the top element of the stack (should be 4)

    st.pop(); // Pop the top element from the stack
    st.pop(); // Pop the top element from the stack

    cout << st.top() << endl; // Print the new top element of the stack (should be 2)

    st.push(5); // Push 5 onto the stack
    st.push(6); // Push 6 onto the stack

    cout << st.top() << endl; // Print the new top element of the stack (should be 6)

    cout << st.empty() << endl; // Check if the stack is empty (should be 0, meaning false)

    return 0;
}
