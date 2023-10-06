#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Helper function to build a binary tree using preorder and inorder traversals.
TreeNode *buildTreeHelper(vector<int> preorder, int prestart, int preend, vector<int> inorder, int instart, int inend, unordered_map<int, int> &inmap)
{

    // Base Case: If either preorder or inorder range is empty, return NULL (no nodes to build).
    if (prestart > preend || instart > inend)
    {
        return nullptr; // Handling the leaf nodes.
    }

    // Create a new TreeNode using the current root value from preorder.
    TreeNode *rootNode = new TreeNode(preorder[prestart]);

    // Find the index of the root value in inorder traversal (rootInorderIndex).
    int rootInorderIndex = inmap[rootNode->val];

    // Calculate the size of the left subtree.
    int leftSubTreeSize = rootInorderIndex - instart;

    // Recursively build the left subtree using updated ranges.
    rootNode->left = buildTreeHelper(preorder, prestart + 1, prestart + leftSubTreeSize, inorder, instart, rootInorderIndex - 1, inmap);

    // Recursively build the right subtree using updated ranges.
    rootNode->right = buildTreeHelper(preorder, prestart + leftSubTreeSize + 1, preend, inorder, rootInorderIndex + 1, inend, inmap);

    return rootNode;
}

// Main function to build a binary tree from preorder and inorder traversals.
TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder)
{
    unordered_map<int, int> inmap;

    // Create a map to store the indices of values in the inorder traversal for quick lookup.
    for (int i = 0; i < inorder.size(); i++)
    {
        inmap[inorder[i]] = i;
    }

    // Call the helper function to construct the binary tree.
    return buildTreeHelper(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1, inmap);
}

// Function to print the binary tree in inorder traversal.
void inorderTraversal(TreeNode *root)
{
    if (root)
    {
        inorderTraversal(root->left);
        cout << root->val << " ";
        inorderTraversal(root->right);
    }
}

int main()
{
    // Example usage:
    vector<int> preorder = {3, 9, 20, 15, 7};
    vector<int> inorder = {9, 3, 15, 20, 7};

    TreeNode *root = buildTree(preorder, inorder);

    cout << "Inorder Traversal of Constructed Tree: ";
    inorderTraversal(root);
    cout << endl;

    // You can perform operations on the constructed tree here.

    // Don't forget to free the memory used by the tree nodes when done.
    // Add cleanup code here.

    return 0;
}
