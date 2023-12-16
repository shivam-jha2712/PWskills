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

bool isPalindrome(Node *&head)
{
    // Step1: Find Middle element
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Step 2: Break the linked List
    Node *curr = slow->next;
    Node *prev = slow;
    slow->next = NULL;

    // Step 3: Reverse the second half of the linked list
    while (curr != NULL)
    {
        Node *next = curr->next;
        curr->next = prev;

        prev = curr;
        curr = next;
    }

    // Step 4: Compare part 2 of the linked list with the first half
    Node *headtop = head;
    Node *tail = prev;

    while (tail != NULL)
    {
        if (headtop->val != tail->val) // if value is not same, return false
            return false;

        headtop = headtop->next; // move headtop by one node
        tail = tail->next;       // move tail by one node
    }

    return true; // if same then return true
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
    ll.insertAtTail(2);
    ll.insertAtTail(1);
    ll.display();

    if (isPalindrome(ll.head))
    {
        cout << "Is a Palindrome" << endl;
    }
    else
    {
        cout << "Is not a Palindrome" << endl;
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