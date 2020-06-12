#include <bits/stdc++.h>

using namespace std;

struct Node
{
    char data;
    Node *left;
    Node *right;
};

Node *root = NULL;

Node *addNode(Node **root, char isi);
Node *preOrder(Node *root);
Node *inOrder(Node *root);
Node *postOrder(Node *root);

int main()
{
    cout << "Tree   : \n";
    cout << "            M" << endl;
    cout << "          /   \\" << endl;
    cout << "         /     \\ " << endl;
    cout << "        E       L" << endl;
    cout << "       / \\     / \\ " << endl;
    cout << "      A   I   B   O" << endl; 
    cout << "       \\         /" << endl;
    cout << "        U       D\n" << endl;
    
    addNode(&root, 'M' );
    addNode(&root->left, 'E');
    addNode(&root->left->left, 'A');
    addNode(&root->left->right, 'I');
    addNode(&root->left->left->right, 'U');
    addNode(&root->right, 'L');
    addNode(&root->right->left, 'B');
    addNode(&root->right->right, 'O');
    addNode(&root->right->right->left, 'D');

    cout << "PreOrder      : ";
    preOrder(root);
    cout << endl;
    cout << "inOrder       : ";
    inOrder(root);
    cout << endl;
    cout << "postOrder     : ";
    postOrder(root);
    cout << "\n" << endl;

    system("pause");
    return 0;
}

Node *addNode(Node **root, char data)
{
    if (*root == NULL)
    {
        Node *newNode;
        newNode = new Node;
        newNode->data = data;
        newNode->left = NULL;
        newNode->right = NULL;
        *root = newNode;
    }
}
Node *preOrder(Node *root)
{
    if (root != NULL)
    {
        cout << " " << root->data;
        preOrder(root->left);
        preOrder(root->right);
    }
}

Node *inOrder(Node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        cout << " " << root->data;
        inOrder(root->right);
    }
}

Node *postOrder(Node *root)
{
    if (root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout << " " << root->data;
    }
}
