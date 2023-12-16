#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int value;   // Data of the node
    Node *left;  // Left node pointer
    Node *right; // Right node pointer

    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

void preOrderTraversal(Node *rootNode)
{
    // Base case
    if (rootNode == NULL)
    {
        return;
    }

    cout << rootNode->value << " ";
    // recursive calls
    preOrderTraversal(rootNode->left);
    preOrderTraversal(rootNode->right);
}

int main() // MAIN DEFINATION
{
    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    // Calling the function for preorder traversal using rootNode
    preOrderTraversal(rootNode);
    return 0;
}