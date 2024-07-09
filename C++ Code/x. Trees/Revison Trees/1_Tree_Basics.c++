#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;

    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

int main() // MAIN DEFINATION
{
    ios_base::sync_with_stdio(false); // For fast I/O
    cin.tie(0);
    cout.tie(0);

    Node *root = new Node(3);
    root->left = new Node(2);
    root->right = new Node(4);

    cout << root->left->value << root->value << root->right->value << endl;

    return 0;
}
