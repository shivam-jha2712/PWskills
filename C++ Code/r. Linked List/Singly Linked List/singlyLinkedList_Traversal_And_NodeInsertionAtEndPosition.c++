#include <bits/stdc++.h> // HEADER FILE

using namespace std;
// Creating a Node
class Node
{
public:
    int val;
    Node *next;

    // Constructor created to store data within a node
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

// Also, whenever we need to access a linked list. we can do it by passing its head pointer and here in Function we pass the head pointer of the linked list by refernce since we would be changing its position in the linked list

// Function to insert a node at begining of a linked list
void insertAtHead(Node *&head, int val)
{

    Node *new_node = new Node(val); // Create an obj (new_node) of class Node
    new_node->next = head;          // storing the head pointer of the linked list to the next of the new node created.
    head = new_node;                // Updating the head pointer to point to the new_node
}

// Function to insert a node at the tail of the linked list.
void insertAtTail(Node *&head, int val)
{
    Node *new_node = new Node(val); // Create an obj (new_node) of class Node

    Node *temp = head;         // temp and head pointer will be at the same place intially
    while (temp->next != NULL) // Till the time the next pointer of temp has not pointed to null we will keep on updating the pointer (temp = temp->next)
    {
        temp = temp->next;
    }

    // When temp has reached the last node
    temp->next = new_node;
    // new_node = NULL; //this is although by default
}

// But while Printing we are passing it by value as we will be not changing anything
// Traversal of Linked List to display the linked list
void display(Node *head)
{

    Node *temp = head; // temp and head pointer will be at the same place
    while (temp != NULL)
    {
        cout << temp->val << "->";
        temp = temp->next; // update the temp pointer to point to next
    }
    cout << "NULL" << endl;
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating a new empty linked list to which the node will be added
    Node *head = NULL;
    insertAtHead(head, 2); // Insert at the head of the linked list a new node with value 0
    display(head);

    insertAtHead(head, 1); // Insert at the head of the linked list a new node with value 1
    display(head);

    insertAtHead(head, 0); // Insert at the head of the linked list a new node with value 2
    display(head);

    insertAtTail(head, 3); // Insert at the tail of the linked list a new node with value 3
    display(head);

    return 0;
}