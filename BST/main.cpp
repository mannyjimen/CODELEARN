#include "BST.hpp"

int main()
{
    Node* hello = new Node;
    hello->setData(5);
    BST christmas(hello);
    christmas.display();
    christmas.insert(christmas.getRoot(), 6);
    christmas.insert(christmas.getRoot(), 4);
}
