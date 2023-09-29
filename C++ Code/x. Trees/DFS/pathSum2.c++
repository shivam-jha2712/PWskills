#include <iostream>
#include <vector>

using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int value;       // Node's value
    TreeNode *left;  // Left child
    TreeNode *right; // Right child

    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
};

// DFS helper function to explore the tree and find paths
void dfs(TreeNode *node, int targetSum, vector<int> &currentPath, vector<vector<int>> &result)
{
    if (!node)
        return; // Base case

    // Add the current node's value to the path
    currentPath.push_back(node->value);

    // Check if it's a leaf node and if its value equals the remaining targetSum
    if (!node->left && !node->right && targetSum == node->value)
    {
        result.push_back(currentPath); // Found a valid path
    }

    // Recursive calls for left and right subtrees
    dfs(node->left, targetSum - node->value, currentPath, result);
    dfs(node->right, targetSum - node->value, currentPath, result);

    // Backtrack: remove the current node from the path
    currentPath.pop_back();
}

// Function to find all root-to-leaf paths with the given target sum
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> result;
    vector<int> currentPath; // To store the current path

    // Start DFS traversal from the root
    dfs(root, targetSum, currentPath, result);

    return result;
}



int main()
{
    // Create a sample binary tree
    TreeNode *root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->left = new TreeNode(5);
    root->right->right->right = new TreeNode(1);

    int targetSum = 22;

    // Find root-to-leaf paths with the target sum
    vector<vector<int>> result = pathSum(root, targetSum);

    // Print the result
    for (const vector<int> &path : result)
    {
        cout << "Path: ";
        for (int value : path)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}
