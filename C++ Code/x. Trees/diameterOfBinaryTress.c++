#include <iostream>
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
// Function to calculate the depth (height) of a binary tree starting from a given node.
int depth(Node *node)
{
    if (node == nullptr)
    {
        return 0; // Base case: If the node is null (empty), its depth is 0.
    }

    // Recursive calls to calculate the depth of the left and right subtrees.
    int leftDepth = depth(node->left);
    int rightDepth = depth(node->right);

    // The depth of the current node is the maximum depth among its left and right subtrees, plus 1 (for the current node).
    return max(leftDepth, rightDepth) + 1;
}

// Function to calculate the diameter of a binary tree.
int diameterOfBinaryTree(Node *root)
{
    if (root == nullptr)
    {
        return 0; // Base case: If the tree is empty (root is null), the diameter is 0.
    }

    // Calculate the diameter passing through the root node by summing the depths of its left and right subtrees.
    int rootDiameter = depth(root->left) + depth(root->right);

    // Recursively calculate the diameters of the left and right subtrees.
    int leftDiameter = diameterOfBinaryTree(root->left);
    int rightDiameter = diameterOfBinaryTree(root->right);

    // The overall diameter of the tree is the maximum among the root diameter, left subtree diameter, and right subtree diameter.
    return max(rootDiameter, max(leftDiameter, rightDiameter));
}

int main()
{
    // Create a sample binary tree for testing
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    // Calculate and print the diameter of the binary tree
    int result = diameterOfBinaryTree(root);
    cout << "Diameter of the binary tree: " << result << endl;

    // Clean up memory (not necessary in LeetCode)
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
