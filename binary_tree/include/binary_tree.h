#pragma once
#include "node.h"

struct binary_tree
{
    binary_tree();
    ~binary_tree();

    void insert(int value);
    void delete_tree();
    node *search(int value);
    void print();

private:
    void insert(int value, node *leaf);
    void delete_tree(node *leaf);
    node *search(int value, node *leaf);
    void print(node *leaf);

    node *root;
};