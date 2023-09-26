#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;         // Data of the node
    TreeNode *left;  // Left node pointer
    TreeNode *right; // Right node pointer

    TreeNode(int v)
    {
        val = v;
        left = right = NULL;
    }
};

// Function to find the bottom view of a binary tree
vector<int> bottomView(TreeNode *root)
{
    vector<int> bottomViewValues;

    if (root == nullptr)
    {
        return bottomViewValues;
    }

    // Create a map to store column number and node values.
    map<int, int> columnNumberMap;

    // Create a queue for BFS traversal, using a pair to store the node and its column number.
    queue<pair<TreeNode *, int>> q;
    q.push(make_pair(root, 0)); // Root node has column number 0.

    while (!q.empty())
    {
        pair<TreeNode *, int> currentNode = q.front();
        TreeNode *node = currentNode.first;
        int columnNumber = currentNode.second;
        q.pop();

        // Update the map with the current node's value for the current column.
        columnNumberMap[columnNumber] = node->val;

        // Enqueue left child with adjusted column number.
        if (node->left)
        {
            q.push(make_pair(node->left, columnNumber - 1));
        }

        // Enqueue right child with adjusted column number.
        if (node->right)
        {
            q.push(make_pair(node->right, columnNumber + 1));
        }
    }

    // Extract values from the map (bottom view).
    for (const auto &entry : columnNumberMap)
    {
        bottomViewValues.push_back(entry.second);
    }

    return bottomViewValues;
}

int main()
{
    TreeNode *rootNode = new TreeNode(2);
    rootNode->left = new TreeNode(4);
    rootNode->right = new TreeNode(10);
    rootNode->left->left = new TreeNode(6);
    rootNode->left->right = new TreeNode(5);
    rootNode->right->right = new TreeNode(11);

    // Calling the bottomView function
    vector<int> result = bottomView(rootNode);

    // Print the bottom view values
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
