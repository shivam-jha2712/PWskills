#include <iostream>

using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int value;       // Node's value
    TreeNode *left;  // Left child
    TreeNode *right; // Right child

    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
};

// Function to check if a path with a given sum exists in the binary tree
bool hasPathSum(TreeNode *root, int targetSum)
{
    // Base case: If the current node is NULL, there's no path, so return false.
    if (root == NULL)
    {
        return false;
    }

    // Base case: If the current node is a leaf (has no children),
    // check if its value equals the remaining target sum.
    if (root->left == NULL && root->right == NULL)
    {
        return root->value == targetSum;
    }

    // Recursively check if a path with the target sum exists in the left or right subtree.
    // Subtract the current node's value from the targetSum for the recursive calls.
    return (hasPathSum(root->left, targetSum - root->value) || hasPathSum(root->right, targetSum - root->value));
}

int main()
{
    // Create a sample binary tree
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(2);

    int targetSum = 18;
    // int targetSum = 8;

    // Check if a path with the target sum exists in the binary tree
    bool result = hasPathSum(root, targetSum);

    // Print the result
    if (result)
    {
        cout << "A path with sum " << targetSum << " exists in the binary tree." << endl;
    }
    else
    {
        cout << "No path with sum " << targetSum << " exists in the binary tree." << endl;
    }

    return 0;
}
