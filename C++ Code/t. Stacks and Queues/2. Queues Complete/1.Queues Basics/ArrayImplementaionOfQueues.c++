#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Queue
{
    int front;
    int back;
    vector<int> v;

public:
    Queue()
    {
        this->front = -1;
        this->back = -1;
    }

    // Function to Enqueue
    void enqueue(int data)
    {
        if (this->back == 0)
        {
            this->front = 0;
        }
        this->v.push_back(data);
        this->back++;
    }

    // Function to dequeue
    void dequeue()
    {
        if (this->front == this->back)
        {
            this->front = -1;
            this->back = -1;
            this->v.clear();
        }
        else
        {
            this->front++;
        }
    }

    // getFront Function
    int getFront()
    {
        if (this->front == -1)
        {
            return -1;
        }
        else
        {
            return this->v[this->front];
        }
    }

    // isEmpty Function
    bool isEmpty()
    {
        return this->front == -1;
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