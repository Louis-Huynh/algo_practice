#include <iostream>
#include "binary_tree.h"
using std::cout;

binary_tree::binary_tree()
{
    root = NULL;
}

void binary_tree::insert(int value)
{
    if (root != NULL)
    {
        insert(value, root);
    }
    else
    {
        root = new node;
        root->left = NULL;
        root->right = NULL;
        root->value = value;
    }
}

void binary_tree::delete_tree()
{
    delete_tree(root);
}

node *binary_tree::search(int value)
{
    return search(value, root);
}

void binary_tree::insert(int value, node *leaf)
{
    if (value > leaf->value)
    {
        if (leaf->right != NULL)
            insert(value, leaf->right);
        else
        {
            leaf->right = new node;
            leaf->right->left = NULL;
            leaf->right->right = NULL;
            leaf->right->value = 0;
        }
    }
    else if (value <= leaf->value)
    {
        if (leaf->left != NULL)
            insert(value, leaf->left);
        else
        {
            leaf->left = new node;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
            leaf->left->right = 0;
        }
    }
}

void binary_tree::delete_tree(node *leaf)
{
    if (leaf->left != NULL)
    {
        delete_tree(leaf->left);
    }
    else if (leaf->right != NULL)
    {
        delete_tree(leaf->right);
    }
    else
    {
        delete leaf;
    }
}

node *binary_tree::search(int value, node *leaf)
{
    if (leaf != NULL)
    {
        if (value == leaf->value)
            return leaf;
        else if (value > leaf->value)
        {
            search(value, leaf->right);
        }
        else if (value < leaf->value)
        {
            search(value, leaf->left);
        }
    }
    else
    {
        return NULL;
    }
}