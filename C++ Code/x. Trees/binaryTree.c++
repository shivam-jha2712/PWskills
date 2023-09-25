#include<bits/stdc++.h> // HEADER FILE
    
using namespace std;

class Node{
    public:

    int value; // Data of the node
    Node* left; // Left node pointer
    Node* right; // Right node pointer

    Node(int v){
        value = v;
        left = right = NULL;
    }
};


int main() // MAIN DEFINATION
{

    Node* root = new Node(2);
    root->left = new Node(1);
    root->right = new Node(3);

    cout << "Root Node :" << root->value << endl;
    cout << "Left Child Node Value :" << root->left->value << endl;
    cout << "Right Child Node Value :" << root->right->value << endl;
    return 0;
}