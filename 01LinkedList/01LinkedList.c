//LinkedList inserting a node at the begining.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;           //creating a linkedList of type integers.
    struct Node *next;  //pointer to node that will store the address of the next node.

};

struct Node *head;      //pointer variable head

void Insert(int x){
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));     //malloc returns a void pointer, so we need type casting.
    //what malloc does is it creates a memory block and as arguement we pass the number of memory blocks we want!
    (*temp).data = x;   //temp -> data = x SAME THING
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp ->next;
    }
    printf("\n");
}

int main(){
    head = NULL;    //This pointer varibla points nowhere.
    printf("How many numbers? \n");
    int n,i,x;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("Enter the number \n");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
    }
