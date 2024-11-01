#include "BST.hpp"

BST::BST(): root_{nullptr} {}//{ root_ = nullptr; }

BST::BST(Node* root): root_{root} {}//{ root_ = root; }

BST::~BST()
{
    if (root_)
    {
        delete root_;
        root_ = nullptr;
    }
    std::cout << "Destructor has been called" << std::endl;
}

Node* BST::newNode(int x)
{
    Node* nodeNew = new Node(x); //dynamically creating node
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
Node* BST::getRoot() const { return root_; }

bool BST::insert(int x) // public insert
{
    Node* oldroot = root_;

    root_ = insert(root_, x);

    return true;
}

Node* BST::insert(Node* root, int x) // private insert
{
    if (root == nullptr) // found where we should add a new node
    {       
        std::cout << "Just inserted the new Node! of data " << x << std::endl;
        root = newNode(x);
        return root;
    }
    
    else if (x < root->data_)
        root->left_ = insert(root->left_, x);
    else if (x > root->data_)
        root->right_ = insert(root->right_, x);
    return root; //if x == the data of current root, x is already in BST

}

bool BST::remove(int x)
{
    remove(root_, x);
    return true;
}

Node* BST::remove(Node* root, int x)
{
}

bool BST::isEmpty()
{
    if (root_ == nullptr)
        return true;
    return false;
}

void BST::display()
{
    std::cout << root_->data_ << std::endl;
}

