#include <bits/stdc++.h>
using namespace std;
#define forin for (int i = 0; i < n; i++)

struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
// Pre-Order Traversals
void preOrder(Node *node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}
// In-Order Traversals
void inOrder(Node *node)
{
    if (node == NULL)
        return;
    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}
// Post-Order Traversals
void postOrder(Node *node)
{
    if (node == NULL)
        return;
    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    preOrder(root);
    cout << endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;

    return 0;
}