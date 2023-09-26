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

// Will be using queues for implementing the BFS
vector<int> reverseOrderTraversal(Node *rootNode)
{
    vector<int> result;
    // base case
    if (rootNode == NULL)
        return result;

    queue<Node *> q;  // Creating a queue of type Node* which will store all the nodes of the tree
    stack<Node *> st; // Getting a stack to push nodes in LIFO
    q.push(rootNode);  // Pushing the root node into the queue


    while (!q.empty()) // till the time my queue is not empty
    {
        int nodesAtCurrentLevel = q.size(); // storing the number of nodes at the current level
        while (nodesAtCurrentLevel--)
        {
            Node *currentNode = q.front(); // storing the current node
            q.pop();                       // popping the current node
            st.push(currentNode);          // pushing the current node into the stack

            // Unless we have any children to the left and right, we would push them in the queue
            if (currentNode->right) // if right child of current node exists
            {
                q.push(currentNode->right); // push the current node right child
            }
            if (currentNode->left) // if left child of current node exists
            {
                q.push(currentNode->left); // push the current node left child
            }
        }
    }

    while (!st.empty())
    {
        result.push_back(st.top()->value); // pop from stack and push node value to result
        st.pop();
    }

    return result;
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
    vector<int> result = reverseOrderTraversal(rootNode);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}