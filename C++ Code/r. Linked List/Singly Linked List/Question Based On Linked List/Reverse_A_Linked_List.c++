#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

// How to create an empty linked list
// Since we know we could access a linkedlist from its head thus the only property for a linked list class is "head"
class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = NULL;
    }

    // Writing a function to insert value in this linkedlist
    void insertAtTail(int value) // logic is same of insertion at tail with 2 conditions
    {
        // If toh list is empty then just create a new node and make head pointer point to it.
        Node *new_node = new Node(value);
        if (head == NULL) // if linkedlist is empty
        {
            head = new_node;
            return;
        }

        Node *temp = head; // creating a temp pointer pointing to head
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        // After the completion of loop we reach to the end of list
        temp->next = new_node; // here we make temp->next point to the new_node
    }

    // Function to display the linkedList created above
    void display() // since this function is passed inside a class LinkedList
    {              // we don't need to pass the head pointer as a parameter
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node *reverseLinkedList(Node *&head)
{
    Node *prevptr = NULL;    // Create a pointer to keep track of the previous node
    Node *currentptr = head; // Create a pointer to traverse the linked list, starting from the head

    // Iterate through the linked list and reverse the links between nodes
    while (currentptr != NULL) // Loop until we reach the end of the original list
    {
        Node *nextptr = currentptr->next; // Create a pointer to store the next node in the original list

        // Reverse the link by pointing the current node's next pointer to the previous node
        currentptr->next = prevptr;

        // Move the previous pointer to the current node and the current pointer to the next node
        prevptr = currentptr;
        currentptr = nextptr;
    }

    // When the loop ends, the prevptr will be pointing to the last node in the original list, which becomes the new head
    Node *new_head = prevptr;

    return new_head; // Return the new head of the reversed list
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating an Object ll of class LinkedList
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.head = reverseLinkedList(ll.head);
    ll.display();

    // int n;
    // cin >> n;

    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cin >> val;
    //     ll.insertAtTail(val);
    // }
    // ll.display();

    return 0;
}