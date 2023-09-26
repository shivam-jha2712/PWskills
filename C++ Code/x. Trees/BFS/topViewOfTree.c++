#include <bits/stdc++.h> // HEADER FILE

using namespace std;

class Node
{
public:
    int value;   // Data of the node
    Node *left;  // Left node pointer
    Node *right; // Right node pointer

    Node(int v)
    {
        value = v;
        left = right = NULL;
    }
};

// Function to find the top view of a binary tree.
// The top view contains the nodes that are visible from the top.
vector<int> topViewOfTree(Node *root)
{
    vector<int> topViewValues; // Initialize an empty vector to store the top view nodes.

    // Base Case: If the root is nullptr, return an empty result.
    if (root == nullptr)
    {
        return topViewValues;
    }

    // Create a map to store column number and node values.
    map<int, int> columnNumberMap;

    // Create a queue for BFS traversal, using a pair to store the node and its column number.
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0)); // Root node has column number 0.

    while (!q.empty())
    {
        pair<Node *, int> currentNode = q.front(); // Get the front element of the queue, which is a pair of node and column number.
        Node *node = currentNode.first;            // Extract the node from the pair.
        int columnNumber = currentNode.second;     // Extract the column number from the pair.
        q.pop();                                   // Remove the front element from the queue.

        // Explanation:
        // - The queue stores pairs where the first element of the pair is a tree node (currentNode.first),
        //   and the second element is the column number (currentNode.second).
        // - Here, we retrieve the front element of the queue, which contains both the node and its column number.
        // - We extract the node and column number from the pair for further processing.
        // - Finally, we remove the front element from the queue to process the next node in the BFS traversal.

        // If the column number is not in the map, add it to the map.
        if (columnNumberMap.find(columnNumber) == columnNumberMap.end())
        {
            columnNumberMap[columnNumber] = node->value; 
            // And in that columnNumber-key assign the value of node->value
        }

        // Enqueue left child with adjusted column number.
        if (node->left)
        {
            q.push(make_pair(node->left, columnNumber - 1));
        }

        // Enqueue right child with adjusted column number.
        if (node->right)
        {
            q.push(make_pair(node->right, columnNumber + 1));
        }
    }

    // Extract values from the map (top view) and store them in the result vector.
    for (const auto &entry : columnNumberMap)
    {
        topViewValues.push_back(entry.second);
    }

    return topViewValues; // Return the vector containing the top view nodes.
}

int main() // MAIN DEFINATION
{

    Node *rootNode = new Node(2);
    rootNode->left = new Node(4);
    rootNode->right = new Node(10);
    rootNode->left->left = new Node(6);
    rootNode->left->right = new Node(5);
    rootNode->right->right = new Node(11);

    // Calling the BFS Function

    vector<int> topView = topViewOfTree(rootNode);

    for (int i = 0; i < topView.size(); i++)
    {
        cout << topView[i] << " ";
    }

    return 0;
}
