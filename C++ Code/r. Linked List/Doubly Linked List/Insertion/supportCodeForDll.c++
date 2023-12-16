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
    dll.display();

    return 0;
}