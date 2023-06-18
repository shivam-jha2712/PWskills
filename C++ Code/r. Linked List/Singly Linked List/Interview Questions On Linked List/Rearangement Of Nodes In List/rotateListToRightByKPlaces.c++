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

Node *rotateRightByK(Node *&head, int k)
{

    // Check if the list is empty or has only one element in it
    if (head == nullptr || head->next == nullptr)
    {
        return head; // Return head for an empty list or a list with only one element
    }

    // Step 1: Find the length of the list
    Node *temp = head;
    int n = 0;
    while (temp != nullptr)
    {
        n++;
        temp = temp->next;
    }

    if (k == n)
    {
        return head; // No rotation needed if k is equal to the length of the list
    }

    // Step 2: Find tail node and then make it point to the head
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    tail->next = head;

    // Step 3: Traverse till (n-k-1) nodes and (n-k-1)th node->next = nullptr
    int end = 0;
    if (k > n)
    {
        k = k % n;
        end = n - k - 1;
    }
    else
    {
        end = n - k - 1;
    }
    temp = head;
    while (end-- > 0)
    {
        temp = temp->next;
    }
    Node *new_head = temp->next;
    temp->next = nullptr;

    return new_head;
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

    ll.head = rotateRightByK(ll.head, 8);
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