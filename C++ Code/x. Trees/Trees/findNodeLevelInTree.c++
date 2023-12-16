#include <iostream>

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int findNodeLevel(TreeNode *root, int target, int level = 0)
{
    if (root == nullptr)
    {
        return -1; // Node not found
    }

    if (root->val == target)
    {
        return level; // Node found at this level
    }

    // Recursively search in the left and right subtrees
    int leftLevel = findNodeLevel(root->left, target, level + 1);
    int rightLevel = findNodeLevel(root->right, target, level + 1);

    // Return the level from either subtree (whichever is not -1)
    return (leftLevel != -1) ? leftLevel : rightLevel;
}

int main()
{
    // Create a sample binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int targetNode = 5;
    int level = findNodeLevel(root, targetNode);

    if (level != -1)
    {
        std::cout << "Node " << targetNode << " is at level " << level << std::endl;
    }
    else
    {
        std::cout << "Node " << targetNode << " not found in the tree." << std::endl;
    }

    return 0;
}
