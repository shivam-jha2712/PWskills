#include <bits/stdc++.h>
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

// Function to find the left view of a binary tree
vector<int> leftView(Node *root)
{
    vector<int> leftViewValues;

    if (root == nullptr)
    {
        return leftViewValues;
    }

    // Create a queue for BFS traversal
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        int nodesAtCurrentLevel = q.size();

        for (int i = 0; i < nodesAtCurrentLevel; i++)
        {
            Node *currentNode = q.front();
            q.pop();

            // For the first node at each level, add its value to the left view
            if (i == 0)
            {
                leftViewValues.push_back(currentNode->value);
            }

            // Enqueue left child if it exists
            if (currentNode->left)
            {
                q.push(currentNode->left);
            }

            // Enqueue right child if it exists
            if (currentNode->right)
            {
                q.push(currentNode->right);
            }
        }
    }

    return leftViewValues;
}

int main()
{
    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    // Calling the leftView function
    vector<int> result = leftView(rootNode);

    // Print the left view values
    for (int value : result)
    {
        cout << value << " ";
    }

    // Free allocated memory (not necessary in LeetCode)
    delete rootNode->left->left;
    delete rootNode->left->right;
    delete rootNode->left;
    delete rootNode->right->right;
    delete rootNode->right;
    delete rootNode;

    return 0;
}

/*
               2
        4           10
    6       5           11
*/