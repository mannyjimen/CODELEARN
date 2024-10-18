#ifndef BST_
#define BST_

#include <iostream>

struct Node
{
    int data_;
    Node* left_;
    Node* right_;

    bool setData(int x)
    {
        data_ = x;
    }
    int getData()
    {
        return data_;
    }
    Node* newNode(int x)
    {
        Node* nodeNew = new Node;
        nodeNew->setData(x);
        return nodeNew;
    }
};


class BST
{
    private:
        Node* root_;
    public:

        //BSTNode();
        //what are some functions i would want in a bst ? Find, Insert, Remove

        Node* newNode(int x);    


        bool setRoot(Node* root);
        Node* getRoot();
        bool insert(Node* root, int x);
        bool remove(Node* root, int x);

        void display();
        
        

};

#endif