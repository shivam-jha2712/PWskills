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

// Function to find the right view of a binary tree.
// The right view contains the rightmost nodes at each level.
vector<int> rightViewOfTree(Node *rootNode)
{
    vector<int> ans; // Initialize an empty vector to store the right view nodes.

    // Base Case: If the root node is null, return an empty result.
    if (rootNode == NULL)
    {
        return ans;
    }

    queue<Node *> q;  // Create a queue for level order traversal.
    q.push(rootNode); // Push the root node into the queue.

    while (!q.empty())
    {
        int nodesAtCurrentLevel = q.size(); // Get the number of nodes at the current level.

        while (nodesAtCurrentLevel)
        {
            Node *currentNode = q.front(); // Get the front node from the queue.
            q.pop();                       // Remove the current node from the queue.

            // Check if this is the last node at the current level (rightmost node).
            if (nodesAtCurrentLevel == 1)
            {
                ans.push_back(currentNode->value); // Add the value of the rightmost node to the result.
            }

            // Push the children (left and right) into the queue for the next level.
            if (currentNode->left)
            {
                q.push(currentNode->left);
            }

            if (currentNode->right)
            {
                q.push(currentNode->right);
            }

            nodesAtCurrentLevel--; // Decrement the count of nodes at the current level.
        }
    }

    return ans; // Return the vector containing the right view nodes.
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

    // Calling the function finding the number of leafNodes
    vector<int> ans = rightViewOfTree(rootNode);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}