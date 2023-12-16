#include <iostream>
#include <unordered_map>

using namespace std;

// Definition for a binary tree node
struct TreeNode
{
    int value;       // Node's value
    TreeNode *left;  // Left child
    TreeNode *right; // Right child

    TreeNode(int x) : value(x), left(nullptr), right(nullptr) {}
};

// Helper function to calculate the count of paths with a given sum
int pathSumHelper(TreeNode *root, int targetSum, long int currSum, unordered_map<long int, int> &pathCount)
{
    if (root == NULL)
    {
        return 0; // Base case: If the current node is NULL, return 0 (no path here)
    }

    currSum += root->value;                        // Add the value of the current node to the current sum
    int ansCount = pathCount[currSum - targetSum]; // Check if there is a complement sum in the pathCount

    pathCount[currSum]++; // Increment the count for the current sum

    // Recursively calculate the counts in the left and right subtrees
    ansCount += pathSumHelper(root->left, targetSum, currSum, pathCount) +
                pathSumHelper(root->right, targetSum, currSum, pathCount);

    // Step of backtracking: Decrement the count for the current sum as we backtrack
    pathCount[currSum]--;

    return ansCount; // Return the total count of paths with the target sum
}

// Main function to find the number of paths with a given target sum
int pathSum(TreeNode *root, int targetSum)
{
    unordered_map<long int, int> pathCount;              // Create a map to store the current sum and its count
    pathCount[0] = 1;                                    // Initialize the map with 0 sum having 1 count
    return pathSumHelper(root, targetSum, 0, pathCount); // Call the helper function
}

int main()
{
    // Create a sample binary tree
    TreeNode *root = new TreeNode(10);
    root->left = new TreeNode(5);
    root->right = new TreeNode(-3);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    root->right->right = new TreeNode(11);
    root->left->left->left = new TreeNode(3);
    root->left->left->right = new TreeNode(-2);
    root->left->right->right = new TreeNode(1);

    int targetSum = 8;

    // Find the number of paths with the target sum
    int result = pathSum(root, targetSum);

    // Print the result
    cout << "Number of paths with sum " << targetSum << ": " << result << endl;

    return 0;
}
