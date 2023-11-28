//LinkedList inserting an element at any position
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;           //creating a linkedList of type integers.
    struct Node *next;  //pointer to node that will store the address of the next node.
};

struct Node *head;

void Insert(int data, int n){
    struct Node *temp1 = (struct Node*)malloc(sizeof(struct Node));
    (*temp1).data = data;
    (*temp1).next = NULL;
    if (n == 1){
        temp1->next=head;
        head=temp1;
        return;
    } 
    //for all other cases we have to go to nth-1th node
    struct Node* temp2 = head;
    for (int i = 0; i < n-2; i++)
    {
        temp2 = (*temp2).next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
    
}
void Print(){
    struct Node* temp = head;;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    head = NULL;    //initially empty list
    Insert(2,1);    //List: 2
    Insert(3,2);    //List: 2, 3
    Insert(4,3);    //List: 2, 3, 4
    Insert(5,4);    //List: 2, 3, 4, 5
    Print();
}