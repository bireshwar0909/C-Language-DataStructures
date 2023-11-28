//Find min and mix in a binary search tree 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct BstNode{
    int data;
    struct BstNode *left;
    struct BstNode *right;
};

int findMin(struct BstNode* root){
    struct BstNode* current = root;
    while(current->left != NULL){
        current = current->left;
    } return current-> data;
    if(root==NULL){
        printf("Error: The tree is empty");
        return -1;
    }
}

//Write the code to find the max
