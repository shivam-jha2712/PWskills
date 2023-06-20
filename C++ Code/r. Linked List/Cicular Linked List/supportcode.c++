#include <bits/stdc++.h> // HEADER FILE
#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // Constructor to initialize a node with given data
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

    // Display the elements of the circular linked list
    void display()
    {
        if (head == NULL)
        {
            cout << "Circular linked list is empty." << endl;
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    // Print circular
    // This function is not used in the code, so it is commented out
    /*
    void printCircular()
    {
        Node *temp = head;
        for (int i = 0; i < 15; i++)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }
    */

    // Insert a node at the beginning of the circular linked list
    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            // If the list is empty, make the new node the head
            // and point its next to itself, creating a circular list
            head = new_node;
            new_node->next = head;
            return;
        }

        // Find the tail node of the circular list
        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        // Insert the new node at the beginning of the list
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }
};

int main()
{
    CircularLinkedList cll;

    // Insert elements at the beginning of the circular linked list
    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);

    // Display the circular linked list
    cll.display();

    // Uncomment the line below to test the printCircular function
    // cll.printCircular();

    return 0;
}
