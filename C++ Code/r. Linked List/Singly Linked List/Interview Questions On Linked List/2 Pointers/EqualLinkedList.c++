// Two Pointer Questions On LinkedList
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

// Function to check if two linked lists are equal
bool EqualLinkedList(Node *&head1, Node *&head2)
{
    Node *temp1 = head1; // Pointer to traverse the first linked list
    Node *temp2 = head2; // Pointer to traverse the second linked list

    while (temp1 != NULL && temp2 != NULL) // Traverse both lists simultaneously
    {
        if (temp1->val != temp2->val) // If values at the current nodes are not equal
        {
            return false; // Linked lists are not equal, return false
        }

        temp1 = temp1->next; // Move to the next node in the first linked list
        temp2 = temp2->next; // Move to the next node in the second linked list
    }

    // At this point, either temp1 is NULL or temp2 is NULL or both are NULL
    // If both are NULL, it means both linked lists have been traversed completely
    // If either of them is not NULL, it means the lengths of the linked lists are different
    // In both cases, the linked lists are not equal
    return (temp1 == NULL && temp2 == NULL);
}

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating an Object ll of class LinkedList
    LinkedList ll1;
    LinkedList ll2;

    ll1.insertAtTail(1);
    ll1.insertAtTail(2);
    ll1.insertAtTail(3);
    ll1.insertAtTail(4);
    ll1.insertAtTail(5);
    ll1.display();

    ll2.insertAtTail(1);
    ll2.insertAtTail(2);
    ll2.insertAtTail(3);
    ll2.insertAtTail(4);
    ll2.insertAtTail(5);
    ll2.display();

    if (EqualLinkedList(ll1.head, ll2.head))
        cout << "true" << endl;
    else
        cout << "false" << endl;

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