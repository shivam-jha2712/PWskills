#include <iostream>
#include <queue>
#include <unordered_map>
#include <unordered_set>
using namespace std;

//  * Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


int calculateTime(TreeNode* startNode, unordered_map<TreeNode*, TreeNode*>& parent) {
    unordered_set<TreeNode*> infected;
    
    // Perform BFS (level order traversal)
    queue<TreeNode*> q;
    q.push(startNode);
    infected.insert(startNode);
    int time = 0;

    while (!q.empty()) {
        int currLevelNodes = q.size();
        bool infectFlag = false;
        
        while (currLevelNodes--) { // Process nodes at the current level
            TreeNode* currNode = q.front();
            q.pop();

            // Check left child for infection
            if (currNode->left && infected.find(currNode->left) == infected.end()) {
                infectFlag = true;
                infected.insert(currNode->left);
                q.push(currNode->left);
            }
            
            // Check right child for infection
            if (currNode->right && infected.find(currNode->right) == infected.end()) {
                infectFlag = true;
                infected.insert(currNode->right);
                q.push(currNode->right);
            }
            
            // Check parent for infection
            if (parent[currNode] && infected.find(parent[currNode]) == infected.end()) {
                infectFlag = true;
                infected.insert(parent[currNode]);
                q.push(parent[currNode]);
            }
        }
        
        if (infectFlag) {
            time++;
        }
    }
    return time;
}

TreeNode* makeParent(TreeNode* root, unordered_map<TreeNode*, TreeNode*>& parent, int start) {
    // Apply BFS to create a mapping of child nodes to parent nodes
    // and find the node with the given 'start' value.
    queue<TreeNode*> q;
    q.push(root);

    TreeNode* startNode = nullptr;
    while (!q.empty()) {
        TreeNode* currNode = q.front();
        q.pop();

        if (currNode->val == start) {
            startNode = currNode;
        }

        if (currNode->left) {
            // Map left child to its parent
            parent[currNode->left] = currNode;
            q.push(currNode->left);
        }
        
        if (currNode->right) {
            // Map right child to its parent
            parent[currNode->right] = currNode;
            q.push(currNode->right);
        }
    }

    return startNode;
}

int main() {
    // Example usage
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(5);
    root->right = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->left->right->left = new TreeNode(9);
    root->left->right->right = new TreeNode(2);
    root->right->right = new TreeNode(6);
    root->right->left = new TreeNode(10);
    
    int startNodeValue = 3;
    unordered_map<TreeNode*, TreeNode*> parent;
    TreeNode* startNode = makeParent(root, parent, startNodeValue);
    int timeTaken = calculateTime(startNode, parent);
    cout << "Time taken to infect the tree: " << timeTaken << endl;

    // Don't forget to free the allocated memory to avoid memory leaks.

    
    return 0;
}
