//BinarySearchTree
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BstNode{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};

struct BstNode* GetNewNode(int data){
    struct BstNode *newNode = (struct BstNode*)malloc(sizeof(struct BstNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

//Function to insert in BST, returns address of root node.
struct BstNode* Insert(struct BstNode* root, int data){
    if(root == NULL){   //empty tree
        root = GetNewNode(data);
        return root;
    } else if (data <= root->data){
        root -> left = Insert(root->left,data);
    } else {
        root->right = Insert(root->right,data);
    } return root;
}

bool Search(struct BstNode* root, int data){
    if (root == NULL) return false;
    if (root->data == data) return true;
    else if (data <= root->data) return Search(root->left,data);
    else return Search(root->right, data);
}

int main(){
    struct BstNode *root;
    root = NULL;            //creating an empty tree
    root = Insert(root, 15);
    root = Insert(root, 10);
    root = Insert(root, 20);
    return 0;
}