#include<iostream> // HEADER FILE
#include<deque> // HEADER FILE
    
using namespace std;
    
int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false);  //For fast I/O
    cin.tie(0);
    cout.tie(0);

    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(10);
    dq.push_front(20);

    while(!dq.empty()) {
        cout << dq.front() << endl;
        dq.pop_front();
    }

    return 0;
}