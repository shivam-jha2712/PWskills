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

    void deleteAtStart()
    {

        if (head == NULL)
        {
            return;
        }

        Node *temp = head;
        Node *tail = head;

        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = head->next;
        head = head->next;
        free(temp);
    }

    void deleteAtTail()
    {
        if (head == NULL)
            return;

        Node *tail = head;

        while (tail->next->next != head)
        {
            tail = tail->next;
        }
        // After the loop tail points to the second last node in the list
        Node *temp = tail->next; // temp pointer created that points to the next of the tail
        tail->next = head;       // followed by the next of tail pointing to the head
        free(temp);              // and then free the temp pointer pointed node.
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
    cll.insertAtStart(6);
    cll.display();

    cll.deleteAtStart();
    cll.display();

    cll.deleteAtTail();
    cll.display();

    return 0;
}
