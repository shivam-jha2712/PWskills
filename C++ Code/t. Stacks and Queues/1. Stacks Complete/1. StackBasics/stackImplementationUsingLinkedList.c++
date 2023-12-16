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
            cout << "Overflow" << endl; // Display overflow message if stack is already full
            return;                     // Exit the function
        }

        Node *new_node = new Node(data); // Create a new node with the given data
        new_node->next = this->head;     // Set the next pointer of the new node to the current head
        this->head = new_node;           // Set the head to the new node, making it the new top of the stack
        this->currSize++;                // Increment the current size of the stack to reflect the addition of an element
    }

    // pop FUNCTION: to pop element, here to remove the node from head
    int pop()
    {
        // Check for underflow condition
        if (this->head == NULL)
        {
            cout << "Underflow!!" << endl; // Display underflow message if stack is empty
            return INT_MIN;                // Return minimum integer value to indicate underflow
        }

        Node *new_head = this->head->next; // Store the next node after the current head
        this->head->next = NULL;           // Set the next pointer of the current head to NULL
        Node *toBeRemoved = this->head;    // Store the current head node to be removed
        int result = toBeRemoved->data;    // Retrieve the data value of the node to be removed
        delete toBeRemoved;                // Delete the node to be removed from memory
        this->head = new_head;             // Update the head to the new head node
        this->currSize--;                  // Decrease the current size of the stack
        return result;                     // Return the data value of the removed node
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