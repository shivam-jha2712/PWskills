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
            cout << temp->val << " ->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

Node *reorderOddEven(Node *head)
{
    if (head == NULL)
    {
        return NULL; // If the list is empty, return NULL
    }

    Node *evenhead = head->next; // Head of the even node list
    Node *oddPtr = head;         // Pointer to track odd nodes
    Node *evenPtr = evenhead;    // Pointer to track even nodes

    // Iterate until either evenPtr becomes NULL or evenPtr->next becomes NULL
    while (evenPtr != NULL && evenPtr->next != NULL)
    {
        oddPtr->next = oddPtr->next->next;   // Skip the next odd node and connect oddPtr to the one after it
        evenPtr->next = evenPtr->next->next; // Skip the next even node and connect evenPtr to the one after it
        oddPtr = oddPtr->next;               // Move oddPtr to the next odd node
        evenPtr = evenPtr->next;             // Move evenPtr to the next even node
    }

    oddPtr->next = evenhead; // Connect the last odd node to the head of the even node list

    return head; // Return the head of the rearranged linked list
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

    ll.head = reorderOddEven(ll.head);
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