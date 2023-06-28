#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data) // Constructor with parameter
    {
        this->data = data;
        this->next = NULL;
    }
};

class Queue
{

    Node *head;
    Node *tail;
    int size;

public:
    Queue()
    {
        this->head = NULL;
        this->tail = NULL;
        this->size = 0;
    }

    // Enqueue Function;
    void enqueue(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL) // LL is empty
        {
            this->head = newNode;
            this->tail = newNode;
        }
        else // else simply add at tail
        {
            this->tail->next = newNode;
            this->tail = newNode;
        }
        // Increment the size of the queue
        this->size++;
    }

    // Dequeue Function:
    void dequeue()
    {
        if (this->head == NULL)
        {
            return; // If LL is empty
        }
        else
        {
            Node *oldHead = this->head;
            Node *newHead = this->head->next;
            this->head = newHead;
            //  if after the removal you have the head node to be null then you need to also make changes for the tail pointer and point it to null
            if (this->head == NULL)
            {
                this->tail = NULL; // this is to make the tail point to null as well
            }
            // Now make the oldHead Point to Null in order to get the chain broken
            oldHead->next = NULL;
            delete oldHead; // free the oldHead
            this->size--;
        }
    }

    // getSize Function
    int getSize()
    {
        return this->size;
    }

    // getFront Function
    int getFront()
    {
        if (head == NULL)
            return -1;
        return this->head->data;
    }

    // to check Empty
    bool isEmpty()
    {
        return this->head == NULL;
    }
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Queue qu;
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.enqueue(50);
    qu.dequeue();
    qu.enqueue(60);
    qu.enqueue(70);
    qu.enqueue(80);
    qu.dequeue();
    qu.enqueue(90);
    qu.enqueue(100);

    while (!qu.isEmpty())
    {
        cout << qu.getFront() << endl;
        qu.dequeue();
    }

    return 0;
}