#include <iostream>
#include <stack>

//  Implementation of Stack using Arrays.

using namespace std;

class Stack
{
    // These properties would be private as we know that anything in a class is by default private.
    int capacity; // this property of capacity is itself the size of the stack
    int *arr;     // this is the array we would be using to implement stack
    int top;      // this is the top-idx of the stack

    // The functions/method for accessing and operating with the stack using these properties would be public
public:
    Stack(int c) // Create a stack constructor having a capacity of c;
    {
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    }

    // Functions for implementing operations on the stack
    // push FUNCTION: to push elements inside the stack.
    void push(int data)
    {
        if (this->top == this->capacity - 1) // stack is full
        {
            cout << "Stack is full! - Overflow" << endl;
            return;
        }
        this->top++;                 // move forward by one index
        this->arr[this->top] = data; // and store data at that index
    }

    // pop FUNCTION: to remove the top element of the stack
    int pop()
    {
        if (this->top == -1) // Stack is empty
        {
            cout << "Stack is empty! - Underflow" << endl;
            return INT_MIN;
        }
        return this->top--; // just go back by one index
    }

    // isFull FUNCTION: it is to check that whether stack is full
    bool isFull()
    {
        return this->top == capacity - 1;
        // if top-idx is capacity-1, then stack is full
    }

    // isEmpty FUNCTION: to check if stack is empty
    bool isEmpty()
    {
        return this->top == -1; // if top-idx is -1, then stack is empty
    }

    // getTop FUNCTION : it is to give the topmost element of the stack
    int getTop()
    {
        if (this->top == -1)
        {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }
        return this->arr[this->top];
    }

    // size FUNCTION: it is to give the size of the stack
    int size()
    {
        return this->top + 1;
    }
};

int main()
{

    Stack st(5);

    st.push(1);
    st.push(2);
    st.push(3);
    cout << st.getTop() << endl;
    st.push(4);
    st.push(5);
    cout << st.getTop() << endl;
    st.push(8);

    st.pop();
    st.pop();
    cout << st.getTop() << endl;

    return 0;
}
