#include "BST.hpp"

Node* BST::newNode(int x)
{
    Node* nodeNew = new Node; //dynamically creating node
    nodeNew->data_ = x;
    return nodeNew;
}

bool BST::setRoot(Node* root)
{
    if (root_)
    {
        delete root_;
        root_ = root;
    }
    return true;
}
Node* BST::getRoot()
{
    return root_;
}

bool BST::insert(Node* root, int x)
{//recursive
    if (x > root->data_)
    {
        return (insert(root->right_, x));
    }
    else if (x < root->data_)
    {
        return (insert(root->left_, x));
    }
}

bool BST::remove(Node* root, int x)
{
    if (root->data_ == x)
    {
        delete root;
        root = nullptr;
        return true;
    }

}

