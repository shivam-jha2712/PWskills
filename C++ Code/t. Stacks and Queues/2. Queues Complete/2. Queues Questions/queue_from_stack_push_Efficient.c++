#include <iostream>
#include <stack>

using namespace std;

class Queue
{
    stack<int> st;

public:
    void push(int x)
    {
        st.push(x);
    }

    void pop()
    {
        if (st.empty())
        {
            return; // If the queue is empty
        }
        int topElement = st.top();
        st.pop();
        if (!st.empty())
        {
            pop();               // Recursively pop elements until reaching the bottom element
            st.push(topElement); // Push the popped elements back into the stack
        }
    }

    int front()
    {
        if (st.empty())
        {
            return -1; // If the queue is empty
        }
        int topElement = st.top();
        st.pop();
        if (!st.empty())
        {
            int frontElement = front(); // Recursively get the front element until reaching the bottom element
            st.push(topElement);        // Push the popped elements back into the stack
            return frontElement;
        }
        st.push(topElement); // Push the popped element back into the stack
        return topElement;
    }

    bool empty()
    {
        return st.empty();
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

// // #include <bits/stdc++.h> // HEADER FILE
// #include <iostream> // HEADER FILE
// #include <stack> // HEADER FILE

// using namespace std;

// class Queue
// {
//     stack<int> st;

// public:
//     Queue() {}

//     void push(int x)
//     {
//         this->st.push(x);
//     }

//     void pop()
//     {
//         if (this->st.empty())
//         {
//             return;
//         }
//         stack<int> temp;
//         while (this->st.size() > 1)
//         {
//             temp.push(st.top());
//             st.pop();
//         }
//         // After this loop the stack has only one element thus;
//         this->st.pop();
//         // Now push everything back in the original Stack
//         while (not temp.empty())
//         {
//             this->st.push(temp.top());
//             temp.pop();
//         }
//     }

//     bool empty()
//     {
//         return this->st.empty();
//     }

//     int front()
//     {
//         if (this->st.empty())
//         {
//             return -1;
//         }
//         stack<int> temp;
//         while (this->st.size() > 1)
//         {
//             temp.push(st.top());
//             st.pop();
//         }
//         // After this loop the stack has only one element thus;
//         this->st.pop();
//         // Now push everything back in the original Stack
//         int result = this->st.top(); // storing top element in result
//         while (not temp.empty())
//         {
//             this->st.push(temp.top());
//             temp.pop();
//         }

//         return result; // return the result
//     }
// };

// int main() // MAIN DEFINITION
// {
//     ios_base::sync_with_stdio(false); // For fast I/O
//     cin.tie(0);
//     cout.tie(0);

//     Queue qu;

//     qu.push(10);
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop();
//     qu.pop();

//     while (!qu.empty())
//     {
//         cout << qu.front() << " ";
//         qu.pop();
//     }

//     return 0;
// }
