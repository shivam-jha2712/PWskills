// #include <bits/stdc++.h> // HEADER FILE
#include <iostream> // HEADER FILE
#include <stack>    // HEADER FILE
#include <vector>   // HEADER FILE

using namespace std;

class Queue
{
    int front;     // index of the front element
    int back;      // index of the back element
    vector<int> v; // vector to store the elements
    int cs;        // current size of the queue
    int ts;        // total size of the queue

public:
    Queue(int n)
    {
        v.resize(n);        // resizing the vector to the given size
        this->ts = n;       // setting the total size
        this->back = n - 1; // initializing the back index to the last position
        this->front = 0;    // initializing the front index to the first position
        this->cs = 0;       // initializing the current size to 0
    }

    void enqueue(int x)
    {
        if (isFull()) // check if the queue is full
        {
            return; // if full, return without enqueueing
        }
        this->back = (this->back + 1) % this->ts; // increment the back index circularly
        this->v[this->back] = x;                  // add the element at the back position
        this->cs++;                               // increment the current size
    }

    void dequeue()
    {
        if (isEmpty())                              // check if the queue is empty
            return;                                 // if empty, return without dequeueing
        this->front = (this->front + 1) % this->ts; // increment the front index circularly
        this->cs--;                                 // decrement the current size
    }

    bool isEmpty()
    {
        return this->cs == 0; // check if the current size is 0
    }

    bool isFull()
    {
        return this->cs == this->ts; // check if the current size is equal to the total size
    }

    int getFront()
    {
        if (this->front == -1)
            return -1;               // if the front index is -1, the queue is empty
        return this->v[this->front]; // return the element at the front position
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Queue qu(4);

    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();

    while (!qu.isEmpty())
    {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }

    return 0;
}
