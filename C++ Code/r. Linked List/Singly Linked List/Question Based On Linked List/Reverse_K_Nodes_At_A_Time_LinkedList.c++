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

Node *reverseKAtTime(Node *&head, int k)
{
    // For reversing the first k node we do it iterartively
    // And for that we use three pointer technique
    Node *prevptr = NULL;
    Node *currptr = head;

    int counter = 0; // count of no of nodes to be reversed, till k is reached

    while (currptr != NULL && counter < k) // iterative reversal tab tak hoga jab tak ki ya toh pura list traverse na ho jaaye nahi toh counter k ko na choo le
    {
        Node *nextptr = currptr->next; // third pointer to store next node
        currptr->next = prevptr;       // Reversal has been done (ek baar me do hi reverse hota hai yeh cheez sochna thoda sa)

        // After reversal we just need to update all the pointers by 1 increment
        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    // For the linked list which is from k+1 to nth node
    // currptr will give us (k+1)th node
    if (currptr != NULL)
    {
        Node *new_head = reverseKAtTime(currptr, k);
        head->next = new_head; // since new head ghus jayega purane wale head ke next me jo ki abhi currptr hi hai.
    }

    return prevptr; // Return jo karna hai print karane ke liye woh hoga prevptr
    // Kyunki tera prevptr hi hai joki iterative reversal se ghumne pe aaya hua list ka pehla node hai aur wahi hai jisko jab sahi se arrange karenge toh dega answer.
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
    ll.head = reverseKAtTime(ll.head, 3);
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