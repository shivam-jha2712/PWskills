#include <iostream>

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;

    LinkedList()
    {
        head = nullptr;
    }

    void insertAtTail(int value)
    {
        Node *new_node = new Node(value);
        if (head == nullptr)
        {
            head = new_node;
            return;
        }

        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->val << "-> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// This will have a diffrent output
// 1->2->3->4->5->NULL
// 3->2->1->4->5->NULL

Node *reverseKGroup(Node *&head, int k)
{
    Node *prevptr = nullptr;
    Node *currptr = head;
    Node *nextptr = nullptr;
    int count = 0;

    // Count the number of nodes
    Node *temp = head;
    while (temp != nullptr)
    {
        temp = temp->next;
        count++;
    }

    // If the remainder nodes cannot form a group of size k, no reversal needed
    if (count < k)
    {
        return head;
    }

    // Reverse k nodes
    while (currptr != nullptr && count >= k)
    {
        for (int i = 0; i < k; i++)
        {
            nextptr = currptr->next;
            currptr->next = prevptr;
            prevptr = currptr;
            currptr = nextptr;
            count--;
        }

        // Connect the reversed group to the remaining list
        if (head != nullptr)
        {
            head->next = reverseKGroup(currptr, k);
        }

        return prevptr; // New head of the reversed group
    }

    // No reversal needed for the remainder nodes
    return head;
}

int main()
{
    LinkedList ll;

    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
    ll.head = reverseKGroup(ll.head, 3);
    ll.display();

    return 0;
}
