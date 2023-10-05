#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
#include <string>
#include <algorithm>
#include <cstdlib>
#include <climits>
#include <cmath>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to build a binary tree from a string
TreeNode *buildTreeFromString(const string &s)
{
    if (s.empty())
        return nullptr;

    // Split the string into values
    istringstream iss(s);
    vector<string> values;
    string token;
    while (getline(iss, token, ','))
    {
        values.push_back(token);
    }

    // Create a queue to store the nodes
    queue<TreeNode *> nodes;

    // Create the root node
    TreeNode *root = new TreeNode(stoi(values[0]));
    nodes.push(root);

    // Index to traverse the values
    int index = 1;

    // Start building the tree
    while (!nodes.empty() && index < values.size())
    {
        TreeNode *current = nodes.front();
        nodes.pop();

        // Left child
        if (values[index] != "null")
        {
            current->left = new TreeNode(stoi(values[index]));
            nodes.push(current->left);
        }
        index++;

        // Right child
        if (index < values.size() && values[index] != "null")
        {
            current->right = new TreeNode(stoi(values[index]));
            nodes.push(current->right);
        }
        index++;
    }

    return root;
}

// Function to print the binary tree (in-order traversal)
void printTree(TreeNode *root)
{
    if (!root)
        return;
    printTree(root->left);
    cout << root->val << " ";
    printTree(root->right);
}

int main()
{
    // Input string representing the binary tree
    string input = "1,5,3,null,4,10,6,9,2";

    // Build the binary tree from the input string
    TreeNode *root = buildTreeFromString(input);

    // Print the binary tree (in-order traversal)
    cout << "Binary Tree: ";
    printTree(root);
    cout << endl;

    // Clean up memory (don't forget to free the allocated memory)
    // Implement the cleanup logic based on your specific needs

    return 0;
}
