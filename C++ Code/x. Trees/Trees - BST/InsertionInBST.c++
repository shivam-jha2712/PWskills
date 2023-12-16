#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *insertIntoBST(TreeNode *root, int val)
{
    // Create a new node with the given value
    TreeNode *newNode = new TreeNode(val);

    // If the tree is empty, the new node becomes the root
    if (root == NULL)
    {
        return newNode;
    }

    // If the value is less than the current node's value, insert into the left subtree
    if (val < root->val)
    {
        root->left = insertIntoBST(root->left, val);
    }
    // If the value is greater than the current node's value, insert into the right subtree
    else if (val > root->val)
    {
        root->right = insertIntoBST(root->right, val);
    }

    // Return the modified root of the tree
    return root;
}

// Function to print the tree in-order (used for testing)
void inorderTraversal(TreeNode *root)
{
    if (root == NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->val << " ";
    inorderTraversal(root->right);
}

int main()
{
    TreeNode *root = NULL; // Initialize an empty tree

    // Insert values into the BST
    root = insertIntoBST(root, 50);
    root = insertIntoBST(root, 30);
    root = insertIntoBST(root, 20);
    root = insertIntoBST(root, 40);
    root = insertIntoBST(root, 70);
    root = insertIntoBST(root, 60);
    root = insertIntoBST(root, 80);
    // Trying to insert 37
    root = insertIntoBST(root, 37);

    // Print the in-order traversal of the BST
    cout << "In-order traversal of the BST: ";
    inorderTraversal(root);
    cout << std::endl;

    return 0;
}
