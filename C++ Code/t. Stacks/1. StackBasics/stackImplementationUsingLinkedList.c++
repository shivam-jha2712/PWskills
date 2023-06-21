#include <iostream>
#include <stack>

// Implementation of Stack using Linked List.

using namespace std;

// Creating a node first of all
class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
};

// Creating a Stack class conating all functions and properties of stack
class Stack
{
private:
    Node *head;   // Node to mention the stack head
    int capacity; // Capacity of the stack.
    int currSize; // Size of the stack

public:
    Stack(int c) // Stack constructor with parameter of capacity
    {
        this->capacity = c; // the capacity of stack is c as passed in parameter
        this->currSize = 0; // size of the stack intailly
        head = NULL;        // making the empty linked list
    }

    // Functions involving operation on stack
    // isEmpty FUNCTION: to check if it is empty or not
    bool isEmpty()
    {
        return this->head == NULL;
    }

    // isFull FUNCTION: to check if it is full
    bool isFull()
    {
        return this->currSize == this->capacity;
    }

    // push FUNCTION: to push element in the stack, here at the head
    void push(int data)
    {
        // Check before adding if already full
        if (this->currSize == this->capacity)
        {
            cout << "Overflow" << endl;
            return;
        }
        Node *new_node = new Node(data);
        new_node->next = this->head;
        this->head = new_node;
        this->currSize++; // increment currentSize to check if it does not crosses the boundary condition of overflow
    }

    // pop FUNCTION: to pop element, here to remove the node from head
    int pop()
    {
        // Check for underflow condition
        if (this->head == NULL)
        {
            cout << "Underflow!!" << endl;
            return INT_MIN;
        }
        Node *new_head = this->head->next;
        this->head->next = NULL;
        Node *toBeRemoved = this->head;
        int result = toBeRemoved->data;
        delete toBeRemoved;
        this->head = new_head;
        this->currSize--;
        return result;
    }

    // size FUNCTION: to give the size of the function
    int size()
    {
        return this->currSize;
    }

    // getTop FUNCTION: to get the top value of the function
    int getTop()
    {
        if (this->head == NULL)
        {
            cout << "UnderFlow" << endl;
            return INT_MIN;
        }
        return this->head->data;
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