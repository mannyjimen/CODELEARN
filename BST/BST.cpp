#include "BST.hpp"

BST::BST()
{
    root_ = nullptr;
}

BST::BST(Node* root)
{
    root_ = root;
}

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
    if (root = nullptr)
    {
        root = newNode(x);
        return true;
    }
    else if (x > root->data_)
    {
        return (insert(root->right_, x));
    }
    else if (x < root->data_)
    {
        return (insert(root->left_, x));
    }
    else if (x == root->data_)
    {
        std::cout << "Already in BST" << std::endl;
        return false;
    }
    return false;
}

bool BST::remove(Node* root, int x)
{
    if (root->data_ == x)
    {
        delete root;
        root = nullptr;
        return true;
    }
    else if (root->data_ < x)
    {
        return remove(root->left_, x);
    }
    else if (root->data_ > x)
    {
        return remove(root->right_, x);
    }
    else if (root == nullptr)
        return false;
    return false;
}

void BST::display()
{
    std::cout << root_->getData() << std::endl;
    std::cout << root_->left_->getData() << "   " << root_->right_->getData();
}

