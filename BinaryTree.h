#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include "Data.h"
#include <iostream>

class BinaryTree
{
private:
    struct Node
    {
        Data *data;
        Node *left;
        Node *right;

        Node(Data *d);
        ~Node();
    };

    Node *root;

    void insert(Node *&node, Data *data);
    void inOrderTraversal(Node *node) const;
    void prune(Node *&node);

public:
    BinaryTree();
    ~BinaryTree();
    void insert(Data *data);
    void inOrderTraversal() const;
    void prune();
};

#endif // BINARY_TREE_H