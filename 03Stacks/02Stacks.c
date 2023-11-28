//LinkedList implementation of stacks
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;           //creating a linkedList of type integers.
    struct Node *link;  //pointer to node that will store the address of the next node.
};

struct Node *top = NULL;
//when our top is null our stack is empty

void Push(int x){
     struct Node *temp = (struct Node*)malloc(sizeof(struct Node*));
     temp->data = x;
     temp->link = top;
     top = temp;
}

void Pop(){
    struct Node *temp;
    if (top == NULL) return;
    temp = top;
    top = top->link;
    free(temp);
}