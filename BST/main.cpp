#include "BST.hpp"

int main()
{
    Node* hello = new Node;
    BST christmas(hello);
    christmas.insert(6);
    christmas.display();
    christmas.insert(4);
    
    return 0;

}
