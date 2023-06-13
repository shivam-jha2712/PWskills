#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int val;
    Node *next;

    // Constructor created to store data within a node
    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    // Creating an object n of class Node using the new keyword
    Node *n = new Node(1);                    // Since a parameterised constructor is used thus we need to pass the value of data within itself.
    cout << n->val << " " << n->next << endl; // And since new keyword is used to define the node, we need to use -> function to get the value and pointer to the next node.

    return 0;
}