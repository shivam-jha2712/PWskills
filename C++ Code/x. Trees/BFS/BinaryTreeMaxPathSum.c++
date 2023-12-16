#include <iostream>
#include <climits> // For INT_MIN
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:

    // Helper function to find the maximum path sum for a given subtree rooted at 'root'.
    // 'maxSum' is a reference variable that stores the maximum path sum found so far.
    int maxPathSumHelper(TreeNode* root, int &maxSum)
    {
        // Base case: If the current node is NULL, return 0 as there is no path.
        if (root == nullptr) {
            return 0;
        }

        // Calculate the maximum path sum in the left subtree and ensure it's non-negative.
        int leftMaxSum = max(0, maxPathSumHelper(root->left, maxSum));

        // Calculate the maximum path sum in the right subtree and ensure it's non-negative.
        int rightMaxSum = max(0, maxPathSumHelper(root->right, maxSum));

        // Update 'maxSum' with the maximum path sum found so far, considering the current node.
        maxSum = max(maxSum, leftMaxSum + rightMaxSum + root->val);

        // Return the maximum sum that can be extended from the current node upwards.
        return root->val + max(leftMaxSum, rightMaxSum);
    }

    // Function to find the maximum path sum in the given binary tree.
    int maxPathSum(TreeNode* root) {
        int maxSum = INT_MIN; // Initialize 'maxSum' to a very small value.
        maxPathSumHelper(root, maxSum); // Call the helper function to compute the maximum path sum.
        return maxSum; // Return the final maximum path sum.
    }
};

int main() {
    // Creating a sample binary tree:
    TreeNode* root = new TreeNode(10);
    root->left = new TreeNode(2);
    root->right = new TreeNode(10);
    root->left->left = new TreeNode(20);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(-25);
    root->right->right->left = new TreeNode(3);
    root->right->right->right = new TreeNode(4);

    Solution solution;
    int maxPathSum = solution.maxPathSum(root);

    cout << "Maximum Path Sum in the Binary Tree: " << maxPathSum << endl;

    // Clean up memory (optional)
    delete root->right->right->left;
    delete root->right->right->right;
    delete root->right->right;
    delete root->right;
    delete root->left->right;
    delete root->left->left;
    delete root;
    
    return 0;
}
