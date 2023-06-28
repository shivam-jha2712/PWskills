#include <iostream> // HEADER FILE
#include <stack>    // HEADER FILE
#include <queue>    // HEADER FILE

using namespace std;

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    queue<int> qu;
    qu.push(10);
    qu.push(20);
    qu.push(30);
    qu.push(40);

    stack<int> st;
    while (!qu.empty())
    {
        st.push(qu.front());
        qu.pop();
    }

    while (!st.empty())
    {
        qu.push(st.top());
        st.pop();
    }

    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}