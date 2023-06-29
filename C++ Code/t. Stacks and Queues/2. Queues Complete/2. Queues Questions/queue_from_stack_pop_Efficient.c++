#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> st;

public:
    void push(int x)
    {
        stack<int> tmp;
        while (not this->st.empty())
        {
            tmp.push(this->st.top());
            st.pop();
        }
        this->st.push(x);
        while (not tmp.empty())
        {
            this->st.push(tmp.top());
            tmp.pop();
        }
    }

    void pop()
    {
        if (this->st.empty())
            return;
        this->st.pop();
    }

    int front()
    {
        if(this->st.empty())
            return INT_MIN;
        return this->st.top();
    }

    bool empty()
    {
        return this->st.empty();
    }
};

int main()
{
    Queue qu;

    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);
    qu.pop();
    qu.pop();

    while (!qu.empty())
    {
        cout << qu.front() << " ";
        qu.pop();
    }

    return 0;
}