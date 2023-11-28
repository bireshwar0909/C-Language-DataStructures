#include <stdio.h>
#include <stdlib.h>

struct Node {
	char data;
	struct Node* left;
	struct Node* right;
};

void Preorder(struct Node* root){
    if (root == NULL) return;
    printf("%c ", root->data);
    Preorder(root->left);
    Preorder(root->right);
}

void Inorder(struct Node* root){
    if (root == NULL) return;
    Preorder(root->left);
    printf("%c ", root->data);
    Preorder(root->right);
}

void Inorder(struct Node* root){
    if (root == NULL) return;
    Preorder(root->left);
    Preorder(root->right);
    printf("%c ", root->data);
}