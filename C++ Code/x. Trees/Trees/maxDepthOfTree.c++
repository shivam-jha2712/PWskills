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

int maxDepth(Node *rootNode)
{
    // Base case
    if (rootNode == NULL)
    {
        return 0;
    }

    // recursive calls for getting the max depths of both left and right subtree
    int leftDepth = maxDepth(rootNode->left);
    int rightDepth = maxDepth(rootNode->right);

    // Self work of getting the max depth
    int finalMaxDepth = max(leftDepth, rightDepth) + 1;

    return finalMaxDepth;
}

int main() // MAIN DEFINATION
{
    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);
    rootNode->right->right->left = new Node(12);

    // Calling the function for postorder traversal using rootNode
    cout << "The Max Depth of the Given tree is :" << maxDepth(rootNode);
    return 0;
}