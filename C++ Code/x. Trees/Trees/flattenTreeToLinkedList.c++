#include <iostream>
#include <stack>

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

// Define a global pointer to keep track of the last node in the flattened tree
// What we did here is basically instead of flattening the tree in linked list we made it as a right skewed tree which itself will result in the flattening of the tree.
TreeNode *lastNode = NULL;

// Function to flatten a binary tree
void flatten(TreeNode *root)
{
    // Base case: If the root is NULL, there's nothing to flatten, so return
    if (root == NULL)
    {
        return;
    }

    // Recursively flatten the right subtree
    flatten(root->right);

    // Recursively flatten the left subtree
    flatten(root->left);

    // Connect the right child of the current node to the last flattened node
    root->right = lastNode;

    // Set the left child of the current node to NULL
    root->left = NULL;

    // Update the lastNode pointer to the current node
    lastNode = root;

    return;
}

// Helper function to print a flattened binary tree.
void printFlattenedTree(TreeNode *root)
{
    while (root != NULL)
    {
        cout << root->val << " -> ";
        root = root->right;
    }
    cout << "NULL" << endl;
}

int main()
{
    // Create a binary tree.
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right->right = new TreeNode(6);

    flatten(root);

    // Print the flattened tree.
    cout << "Flattened Tree: ";
    printFlattenedTree(root);

    return 0;
}
