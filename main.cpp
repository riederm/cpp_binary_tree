#include "BinaryTree.h"
#include <iostream>

int main()
{
    BinaryTree tree;

    // Insert some Data objects into the binary tree
    tree.insert(new Data(10));
    tree.insert(new Data(5));
    tree.insert(new Data(15));
    tree.insert(new Data(7));

    // Perform in-order traversal
    std::cout << "In-order traversal: ";
    tree.inOrderTraversal();

    tree.prune();

    return 0;
}