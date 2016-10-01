#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};


void diagonalPrintUtil(Node* root, int d,
                      map<int, vector<int> > &diagonalPrint)
{

    if (!root)
        return;

    diagonalPrint[d].push_back(root->data);

    diagonalPrintUtil(root->left, d + 1, diagonalPrint);


    diagonalPrintUtil(root->right, d, diagonalPrint);
}

// Print diagonal traversal of given binary tree
void diagonalPrint(Node* root)
{
    // create a map of vectors to store Diagonal elements
    map<int, vector<int> > diagonalPrint;
    diagonalPrintUtil(root, 0, diagonalPrint);



    cout << "Diagonal Traversal of binary tree : \n";

    map<int, vector<int> >::iterator it;
   vector<int>::iterator itr;
    for ( it = diagonalPrint.begin();it != diagonalPrint.end(); ++it)
    {
        for (itr = it->second.begin();itr != it->second.end(); ++itr)
            cout << *itr  << ' ';

        cout << '\n';
    }
}

// Utility method to create a new node
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}

// Driver program
int main()
{
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);

    /*  Node* root = newNode(1);
        root->left = newNode(2);
        root->right = newNode(3);
        root->left->left = newNode(9);
        root->left->right = newNode(6);
        root->right->left = newNode(4);
        root->right->right = newNode(5);
        root->right->left->right = newNode(7);
        root->right->left->left = newNode(12);
        root->left->right->left = newNode(11);
        root->left->left->right = newNode(10);*/

    diagonalPrint(root);

    return 0;
}
