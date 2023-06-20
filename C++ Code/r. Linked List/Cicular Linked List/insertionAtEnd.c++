#include <bits/stdc++.h> // HEADER FILE
#include <iostream>
#include <cstdlib>

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

class CircularLinkedList
{
public:
    Node *head;

    CircularLinkedList()
    {
        head = NULL;
    }

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

    void insertAtStart(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
        head = new_node;
    }

    void insertAtEnd(int val)
    {
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            new_node->next = head;
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }
        tail->next = new_node;
        new_node->next = head;
    }
};

int main()
{
    CircularLinkedList cll;

    cll.insertAtStart(1);
    cll.insertAtStart(2);
    cll.insertAtStart(3);
    cll.insertAtStart(4);
    cll.insertAtStart(5);
    cll.display();
    cll.insertAtEnd(6);
    cll.insertAtEnd(7);
    cll.display();
    // cll.printCircular();

    return 0;
}
