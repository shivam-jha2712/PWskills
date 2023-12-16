#include <bits/stdc++.h>
using namespace std;

void print(deque<int> q)
{
    while (q.size())
    {
        cout << q.front() << ' ';
        q.pop_front();
    }
    cout << '\n';
}

void enqueue(deque<int> &q, int val)
{
    q.push_back(val);
}

void dequeue(deque<int> &q)
{
    q.pop_front();
}

int main()
{

    deque<int> q;
    enqueue(q, 10);
    enqueue(q, 20);
    print(q);
    enqueue(q, 30);
    print(q);
    dequeue(q);
    print(q);

    return 0;
}