#include "BinaryTree.h"
#include <iostream>

// Node implementation is inside BinaryTree.h

BinaryTree::Node::Node(Data *d) : data(d), left(nullptr), right(nullptr) {}

BinaryTree::Node::~Node()
{
    delete left;
    delete right;
    delete data;
}

BinaryTree::BinaryTree() : root(nullptr) {}

BinaryTree::~BinaryTree()
{
    delete root;
}

void BinaryTree::insert(Data *data)
{
    insert(root, data);
}

void BinaryTree::insert(Node *&node, Data *data)
{
    if (!node)
    {
        node = new Node(data);
    }
    else if (data->key < node->data->key)
    {
        insert(node->left, data);
    }
    else
    {
        insert(node->right, data);
    }
}

void BinaryTree::inOrderTraversal() const
{
    inOrderTraversal(root);
    std::cout << std::endl;
}

void BinaryTree::inOrderTraversal(Node *node) const
{
    if (node)
    {
        inOrderTraversal(node->left);
        std::cout << node->data->key << " ";
        inOrderTraversal(node->right);
    }
}

void BinaryTree::prune()
{
    prune(root);
}

void BinaryTree::prune(Node *&node)
{
    if (node)
    {
        prune(node->left);
        prune(node->right);
        delete node;
        node = nullptr;
    }
}
