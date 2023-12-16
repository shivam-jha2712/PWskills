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

Node *mergeLinkedList(Node *head1, Node *head2)
{
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    // Create a dummy node to serve as the head of the merged list
    Node *DummyHead = new Node(-1);

    Node *ptr3 = DummyHead;

    while (ptr1 != NULL && ptr2 != NULL)
    {
        // Compare the values of the nodes from both lists
        if (ptr1->val < ptr2->val)
        {
            // Connect the current node from list 1 to the merged list
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
            ptr3 = ptr3->next; // *1
        }
        else if (ptr1->val > ptr2->val)
        {
            // Connect the current node from list 2 to the merged list
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
            ptr3 = ptr3->next; // *2
        }
        // ptr3 = ptr3->next; this can be used once instead of *1 and *2
    }

    // Append the remaining nodes from either list
    if (ptr1 != NULL)
    {
        ptr3->next = ptr1;
    }
    else if (ptr2 != NULL)
    {
        ptr3->next = ptr2;
    }

    // Return the head of the merged list
    return DummyHead->next;
}

Node *mergeKLinkedList(vector<Node *> &lists)
{
    if (lists.size() == 0)
    {
        return NULL; // If the list of lists is empty, return NULL
    }

    while (lists.size() > 1)
    {
        Node *mergedHead = mergeLinkedList(lists[0], lists[1]); // Merge the first two lists
        lists.push_back(mergedHead);                            // Add the merged list to the end of the vector
        lists.erase(lists.begin());                             // Remove the first list from the vector
        lists.erase(lists.begin());                             // Remove the second list from the vector
    }

    return lists[0]; // Return the head of the final merged list
}


// vector-> head1 head2 head3 head4
// 1. head1 and head2 will be merged and pushed in the vector.
// vector->head1 head2 head3 head4 mergerdHead1_2
// Now we will erase head1 and head2 from the vector.
// 2. vector-> head3 head4 mergerdHead1_2
// Now we will merge head3 and head4 and pushed in the vector.
// 3. vector-> head3 head4 mergedHead1_2 mergedHead3_4
// Now we will erase head3 and head4 from the vector.
// 4. vector-> mergedHead1_2 mergedHead3_4
// Now we will merge mergeHead1_2 and mergedHead3_4 and pushed in the vector.
// 5. vector-> mergedHead1_2 mergedHead3_4 mergeHead1_2_3_4
// Now we will erase mergeHead1_2 and mergedHead3_4 from the vector.
// And Finally return the vectored vector
// 6. vector-> mergeHead1_2_3_4

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating an Object ll of class LinkedList
    LinkedList ll1;
    LinkedList ll2;
    LinkedList ll3;

    ll1.insertAtTail(1);
    ll1.insertAtTail(3);
    ll1.insertAtTail(5);
    ll1.insertAtTail(7);
    ll1.insertAtTail(9);
    ll1.display();

    ll2.insertAtTail(2);
    ll2.insertAtTail(4);
    ll2.insertAtTail(6);
    ll2.insertAtTail(8);
    ll2.insertAtTail(10);
    ll2.display();

    ll3.insertAtTail(11);
    ll3.insertAtTail(12);
    ll3.insertAtTail(17);
    ll3.display();

    // Create a vector of linked list pointers
    vector<Node *> lists;
    lists.push_back(ll1.head);
    lists.push_back(ll2.head);
    lists.push_back(ll3.head);

    // Call the mergeKLinkedList function to merge the linked lists
    LinkedList mergedLL;
    mergedLL.head = mergeKLinkedList(lists);
    mergedLL.display();
    
    

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