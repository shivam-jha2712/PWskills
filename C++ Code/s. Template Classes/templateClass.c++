#include <bits/stdc++.h> // HEADER FILE

using namespace std;

template <typename T>
class Node // template class for a Node
{
public:
    T val;
    Node *next;

    Node(T data)
    {
        val = data;
        next = NULL;
    }
};

int main() // MAIN DEFINITION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Node<int> *node1 = new Node<int>(9); // Create a new Node object with integer value 9
    cout << node1->val << endl;          // Print the value of node1

    Node<string> *node2 = new Node<string>("Shivam"); // Create a new Node object with string value "Shivam"
    cout << node2->val << endl;                       // Print the value of node2

    return 0; // Exit the program
}
