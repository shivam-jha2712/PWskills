#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    // Constructor created to store data within a node
    Node(int data)
    {
        prev = NULL;
        val = data;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating an object n of class Node using the new keyword
    Node *n = new Node(1);                                      // Since a parameterised constructor is used thus we need to pass the value of data within itself.
    Node *new_node = new Node(3);                                      // Since a parameterised constructor is used thus we need to pass the value of data within itself.
    cout << n->prev << " " << n->val << " " << n->next << endl; // And since new keyword is used to define the node, we need to use -> function to get the value and pointer to the next node.

    DoublyLinkedList dll;          // Creating a doubly LL object of name dll;
    dll.head = new_node;           // where its head is a new_node
    dll.tail = new_node;           // where its tail is also a new_node
    cout << dll.head->val << endl; // and getting the value of the node
    return 0;
}