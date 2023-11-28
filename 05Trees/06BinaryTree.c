//To check if a binary tree is binary search tree or not.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    char data;
    struct Node *left;
    struct Node *right;
};

bool isSubTreeLesser(struct Node *root, int value)
{
    if (root == NULL)
        return;
    if ((root->data <= value) && isSubTreeLesser(root->left, value) && isSubTreeLesser(root->right, value))
    {
        return true;
    }
    else
        return false;
}

bool isSubTreeGreater(struct Node *root, int value)
{
    if (root == NULL)
        return;
    if ((root->data >= value) && isSubTreeGreater(root->left, value) && isSubTreeGreater(root->right, value))
        return true;
    else
        return false;
}

bool isBinarySearchTree(struct Node *root)
{
    if (root == NULL)
        return;
    if (isSubTreeLesser(root->left, root->right) &&
        isSubTreeGreater(root->right, root->left) &&
        isBinarySearchTree(root->left) &&
        isBinarySearchTree(root->right))
    {
        return true;
    }
    else
        return false;
}