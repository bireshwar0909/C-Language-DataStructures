//DoublyLinkedList-Implementation
#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct Node* head; //global variable - pointer to head node.
struct Node* getNewNode(int x){
    // struct Node myNode;     //it is not a good idea to go in such a way
    // myNode.data = x;        //as the variable will be erased as soon as the funciton call is completed.
    // myNode.next = NULL;     //thats why we use malloc function here
    // myNode.prev = NULL;
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

void insertAtHead(int x){
    struct Node *temp = getNewNode(x);
    if (head == NULL){
        head = temp; 
        return;
    }
    head->prev = temp;
    temp->next = head;
    head = temp;
}

void Print(){
    struct Node* temp = head;
    printf("Forward: ");
    while(temp!= NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void reservePrint(){
    struct Node* temp = head;
    if(temp==NULL) return; //empty list
    //Going to last node
    while(temp->next != NULL){
        temp=temp->next;
    }
    //Traversing backward using prev pointer
    printf("Reverse: ");
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->prev;
    }   printf("\n");
}

int main(){

    head = NULL;    //empty list
    insertAtHead(2); Print(); reservePrint();
    insertAtHead(3); Print(); reservePrint();
    insertAtHead(5); Print(); reservePrint();
    return 0;
}