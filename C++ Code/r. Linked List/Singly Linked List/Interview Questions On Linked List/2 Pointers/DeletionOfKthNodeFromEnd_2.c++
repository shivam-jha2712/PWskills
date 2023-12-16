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

// // INTUTION 1 : Can tarverse the LL two times

// INTITUTION 2: Traversal of linked list can be only once
// And assumming the value of k is always less than length of List
void DeleteKthFromEnd(Node *&head, int k)
{
    Node *ptr1 = head;
    Node *ptr2 = head;

    // Step 1: Move Ptr2 by k steps ahead
    int count = k;
    while (k--)
    {
        ptr2 = ptr2->next;
    }

    if (ptr2 == NULL) // k is equal to the length of the list
    {
        // we have to delete head node
        Node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    // Step 2: Move ptr2 to end of linked list
    // when ptr2 is at null (end of list), ptr1 will be at node to be deleted
    while (ptr2->next != NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    // Now ptr1 is pointing to the node before kth node from end;
    // Node to be deleted is ptr1->next
    Node *temp = ptr1->next;
    ptr1->next = ptr1->next->next;
    free(temp);
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
    ll.display();

    DeleteKthFromEnd(ll.head, 3);
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