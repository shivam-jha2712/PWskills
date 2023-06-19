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

    return 0;
}