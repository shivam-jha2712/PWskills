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
void levelOrderTraversal(Node *rootNode)
{
    // base case
    if (rootNode == NULL)
        return;

    queue<Node *> q; // Creating a queue of type Node* which will store all the nodes of the tree

    q.push(rootNode); // Pushing the root node into the queue

    while (!q.empty()) // till the time my queue is not empty
    {
        int nodesAtCurrentLevel = q.size(); // storing the number of nodes at the current level
        while (nodesAtCurrentLevel--)
        {
            Node *currentNode = q.front();     // storing the current node
            q.pop();                           // popping the current node
            cout << currentNode->value << " "; // printing the current node value

            // Unless we have any children to the left and right we would push them in the queue
            if (currentNode->left) // if left child of current node exists
            {
                q.push(currentNode->left); // push the current node left child
            }

            if (currentNode->right) // if right child of current node exists
            {
                q.push(currentNode->right); // push the current node right child
            }
        }

        cout << endl; // to get the nodes at each level in seperate lines
    }
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
    levelOrderTraversal(rootNode);

    return 0;
}