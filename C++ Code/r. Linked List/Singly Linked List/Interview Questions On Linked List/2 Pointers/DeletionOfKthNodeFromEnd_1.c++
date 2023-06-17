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

// INTUTION 1 : Can tarverse the LL two times
// Step 1: Find the length of the list
int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;

    while (temp != nullptr)
    {
        length++;
        temp = temp->next;
    }

    return length;
}

//  INTUTION 1 : Can tarverse the LL two times
Node *DeleteKthFromEnd(Node *&head, int k)
{
    // Step 1: Find the length of the list
    int l = getLength(head);

    // Step 2: Delete uptill (l - k + 1);
    int pos = (l - k);

    if (pos == 0)
    {
        Node *newHead = head->next;
        delete head;
        return newHead;
    }

    Node *prev = head;        // prev and head pointer will be at the same place intially
    int current_position = 0; // position of prev pointer (at the beginning)

    while (current_position != pos - 1)
    {                       // Till current_pos does not reaches the position to be deleted
        prev = prev->next;  // prev pointer will keep on pointing to its next
        current_position++; // and current_position will be incrementing simultaneously
    }

    // Prev is pointing to node at (pos-1)
    Node *temp = prev->next;       // temp pointer created is pointing to prev->next
    prev->next = prev->next->next; // then point prev->next to prev->next->next
    // free(temp);

    return head;
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