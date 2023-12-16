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

// Function to find if a cycle exists in a Linked List using slow and fast pointers

bool isCyclic(Node *head)
{
    if (head == NULL)
    {
        return false; // If the head is NULL, the list is empty and cannot be cyclic
    }

    Node *slow = head; // Slow pointer moves one step at a time
    Node *fast = head; // Fast pointer moves two steps at a time

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;       // Move slow pointer one step forward
        fast = fast->next->next; // Move fast pointer two steps forward

        if (slow == fast)
        {
            cout << slow->val << endl;
            return true; // If slow and fast pointers meet, there is a cycle in the list
        }
    }

    return false; // If the loop completes without finding a cycle, the list is acyclic
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
    ll.insertAtTail(6);
    ll.insertAtTail(7);
    ll.insertAtTail(8);
    ll.insertAtTail(9);
    ll.display();

    // Adding a cycle
    ll.head->next->next->next->next->next->next = ll.head->next->next;
    // cout << isCyclic(ll.head) << endl;
    if (isCyclic(ll.head))
    {
        cout << "Has a cycle" << endl;
    }
    else
    {
        cout << "Not has a cycle" << endl;
    }

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