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

// Helper function to construct a binary tree from preorder and postorder traversals.
TreeNode *buildTreeHelper(vector<int> &preorder, int preStart, int preEnd,
                          vector<int> &postorder, int postStart, int postEnd,
                          unordered_map<int, int> &postMap)
{
    if (preStart > preEnd || postStart > postEnd)
    {
        return nullptr; // Base case: Return nullptr for leaf nodes.
    }

    TreeNode *root = new TreeNode(preorder[preStart]);

    if (preStart == preEnd)
    {
        return root; // Return the root node if it's a leaf node.
    }

    int leftRootVal = preorder[preStart + 1];
    int leftRootIndexInPost = postMap[leftRootVal];
    int leftSubtreeSize = leftRootIndexInPost - postStart + 1;

    // Recursively build the left and right subtrees using updated ranges.
    root->left = buildTreeHelper(preorder, preStart + 1, preStart + leftSubtreeSize,
                                 postorder, postStart, leftRootIndexInPost, postMap);
    root->right = buildTreeHelper(preorder, preStart + leftSubtreeSize + 1, preEnd,
                                  postorder, leftRootIndexInPost + 1, postEnd - 1, postMap);

    return root;
}

// Main function to construct a binary tree from preorder and postorder traversals.
TreeNode *constructFromPrePost(vector<int> &preorder, vector<int> &postorder)
{
    unordered_map<int, int> postMap;

    // Create a map to store the indices of values in the postorder traversal for quick lookup.
    for (int i = 0; i < postorder.size(); i++)
    {
        postMap[postorder[i]] = i;
    }

    // Call the helper function to construct the binary tree.
    return buildTreeHelper(preorder, 0, preorder.size() - 1,
                           postorder, 0, postorder.size() - 1, postMap);
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
    vector<int> preorder = {1, 2, 4, 5, 3, 6, 7};
    vector<int> postorder = {4, 5, 2, 6, 7, 3, 1};

    TreeNode *root = constructFromPrePost(preorder, postorder);

    cout << "Inorder Traversal of Constructed Tree: ";
    inorderTraversal(root);
    cout << endl;

    // You can perform operations on the constructed tree here.

    // Don't forget to free the memory used by the tree nodes when done.
    // Add cleanup code here.

    return 0;
}
