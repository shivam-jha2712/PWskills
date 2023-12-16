#include <iostream> // HEADER FILE
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
    qu.push(50);
    qu.push(60);
    qu.pop();
    qu.pop();

    while (!qu.empty())
    {
        cout << qu.front() << endl;
        qu.pop();
    }

    return 0;
}