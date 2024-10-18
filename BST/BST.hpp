#ifndef BST_
#define BST_

#include <iostream>

struct Node
{
    int data_;
    Node* left_;
    Node* right_;

    //node constructors
    Node(): data_{0}, left_{nullptr}, right_{nullptr} {}
    Node(int x): data_{x}, left_{nullptr}, right_{nullptr} {}

    void setData(int x) { data_ = x; }
    int getData() const { return data_; }
};

class BST
{
    private:
        Node* root_;


        //helper functions for recursively removing and inserting
        Node* insert(Node* root, int x);
        Node* remove(Node* root, int x);

    public:

        //what are some functions i would want in a bst ? Find, Insert, Remove, find, isempty
        BST();
        BST(Node* root);
        ~BST(); // TRAVERSE TREE, and free all nodes!

        Node* newNode(int x);    

        bool setRoot(Node* root);
        Node* getRoot() const;
        
        bool insert(int x);
        bool remove(int x);
        bool isEmpty();

        void display(); // try in-order traversal
        
};

#endif