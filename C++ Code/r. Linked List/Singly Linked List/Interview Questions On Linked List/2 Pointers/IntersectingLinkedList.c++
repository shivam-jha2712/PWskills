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

// Step-1: Function to find length of Linked list
int getLength(Node *head)
{
    int length = 0;       // Variable to store the length of the linked list
    Node *current = head; // Pointer to traverse the linked list, starting from the head

    // Traverse the linked list until reaching the end (NULL)
    while (current != NULL)
    {
        length++;                // Increment the length for each node encountered
        current = current->next; // Move to the next node
    }

    return length; // Return the final length of the linked list
}

// Step-2: Move head by k moves
Node *moveHeadByK(Node *head, int k)
{
    Node *current = head; // Pointer to traverse the linked list, starting from the head

    // Move the current pointer k positions forward in the linked list
    while (k > 0)
    {
        current = current->next; // Move to the next node
        k--;                     // Decrement k to keep track of the number of positions moved
    }

    return current; // Return the new head node after moving k positions
}
Node *getIntersectionNode(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    // Step 1: Find the lengths of both linked lists
    int length1 = getLength(head1);
    int length2 = getLength(head2);

    // Step 2: Move the longer list's pointer to the same starting position as the shorter list
    int diff = abs(length1 - length2);
    if (length1 > length2)
    {
        ptr1 = moveHeadByK(head1, diff);
    }
    else
    {
        ptr2 = moveHeadByK(head2, diff);
    }

    // Step 3: Traverse both lists until an intersection is found
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1; // Intersection found
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    return NULL; // No intersection found
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
    // 1->2->3->4->5->NULL

    ll2.insertAtTail(6);
    ll2.insertAtTail(7);
    ll2.head->next->next = ll1.head->next->next->next;
    // Creating an intersection
    // 6->7->4->5->NULL

    ll1.display();
    ll2.display();

    cout << endl;

    Node *intersection = getIntersectionNode(ll1.head, ll2.head);
    if (intersection)
    {
        cout << "Intersecting Node : " << intersection->val << endl;
    }
    else
    {
        cout << "No Intersecting Node" << endl;
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