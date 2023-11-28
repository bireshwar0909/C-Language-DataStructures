//LinkedList to delete an element at nth position.
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;           //creating a linkedList of type integers.
    struct Node *next;  //pointer to node that will store the address of the next node.
};

struct Node *head;

void Insert(int x){  //inserting element at the end of the list
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node)); 
    (*temp).data = x; 
    temp->next = head;
    head = temp;
}
void Print(){           //Print all the elements in the list
    struct Node* temp = head;
    printf("List is: ");
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp ->next;
    }
    printf("\n");
}
void Delete(int n){    //Delete node at position n
    struct Node *temp1 = head;
    if (n == 1)
    {
        head = temp1 -> next;
        free(temp1);
        return;
    }
    
    int i;
    for (int i = 0; i < n-2; i++)
    {
        temp1 = temp1 -> next;
        //temp1 points to (n-1)th node
    }
    struct Node *temp2 = temp1->next;   //nth node
    temp1->next = temp2->next;  //(n+1)th node
    free(temp2);
    
}
int main(){
    head = NULL;        //At this stage the list is empty
    Insert(2);
    Insert(1);
    Insert(6);
    Insert(3);      //List: 2,1,6,3
    Print();

    int n;
    printf("Enter a position \n");
    scanf("%d", &n);
    Delete(n);
    Print();
}

// try creating a code that will delete a element of a perticular value other than its position.