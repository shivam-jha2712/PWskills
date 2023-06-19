#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    Node *prev;
    int val;
    Node *next;

    // Constructor created to store data within a node
    Node(int data)
    {
        prev = NULL;
        val = data;
        next = NULL;
    }
};

class DoublyLinkedList
{
public:
    Node *head;
    Node *tail;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    // Display Function
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Function to insert at Tail
    void insertAtTail(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }

        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    // Function to insert at arbitrary kth position
    void insertionAtPosition(int val, int k)
    {
        Node *temp = head;
        int current = 0;
        while (current < k)
        {
            temp = temp->next;
            current++;
        }

        Node *new_node = new Node(val);
        // Assigning next pointers
        new_node->next = temp->next;
        temp->next = new_node;

        // Assigning prev pointers
        new_node->prev = temp;
        temp->next->prev = new_node;

        return;
    }

    // Function to delete from the start
    // This function deletes the first node in a doubly linked list (DLL).

    void deleteFromStart()
    {
        if (head == NULL) // If the DLL is empty, there is nothing to delete.
        {
            return;
        }

        Node *temp = head; // Store the address of the first node in a temporary pointer.

        head = head->next; // Update the head to point to the next node.

        if (head == NULL) // If the DLL had only one node and we deleted it, update the tail to NULL.
        {
            tail = NULL;
        }
        else
        {
            head->prev = NULL; // Update the previous pointer of the new head to NULL.
        }

        free(temp); // Free the memory occupied by the deleted node.
        return;
    }

    // This function deletes the last node in a doubly linked list (DLL).

    void deleteFromEnd()
    {
        if (head == NULL) // If the DLL is empty, there is nothing to delete.
        {
            return;
        }

        Node *temp = tail; // Store the address of the last node in a temporary pointer.

        tail = tail->prev; // Update the tail to point to the previous node.

        if (tail == NULL) // If the DLL had only one node and we deleted it, update the head to NULL.
        {
            head = NULL;
        }
        else
        {
            tail->next = NULL; // Update the next pointer of the new tail to NULL.
        }

        free(temp); // Free the memory occupied by the deleted node.
        return;
    }
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    DoublyLinkedList dll; // Creating a doubly LL object of name dll;

    dll.insertAtTail(1);
    dll.insertAtTail(2);
    dll.insertAtTail(3);
    dll.insertAtTail(4);
    dll.insertAtTail(5);
    dll.insertAtTail(6);
    dll.insertionAtPosition(7, 2);
    dll.display();

    dll.deleteFromStart();
    dll.display();

    dll.deleteFromEnd();
    dll.display();

    return 0;
}