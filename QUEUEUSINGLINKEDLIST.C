#include<stdio.h>
#include<stdlib.h>

//QUEUE IMPLEMENTATION USING LINKED LIST 
void main(){
    int choice;

    while(1){
        printf("\n1. insert the element ");
        printf("\n2. delete the element");
        printf("\n3. display the queue ");
        printf("\n 4. exiting the program ");
        printf("\n enter your choice");
        scanf("%d", &choice);
        switch(choice){
            case 1:
            insert();
            break;

            case 2:
            delete();
            break;

            case 3:
            display();
            break;
            
            case 4:
            exit(0);

            default:
            printf("invalid choice ");
        }
    }
}

struct link{
    int data;
    struct link *next;
};

typedef struct link node;

node* front;
node* rear;

void insert(){
    node* ptr;
    ptr = (node*)malloc(sizeof(node));
    
    printf("\n enter your data to insert");
    scanf("%d", &ptr->data);

    ptr->next = NULL;
    if(ptr == NULL)
    printf("overflow");

    else if((front == NULL) && (rear == NULL))
    front = rear = ptr;

    else{
        rear->next = ptr;
        rear = ptr;
    }
}

void delete(){
    node* temp;
    if(front == NULL)
    printf("\n inderflow");

    else{
        temp = front;
        front = front->next;
        printf("\n deleted element is %d", temp->data);
        free(temp);
    }
}

void display(){
    node* temp;
    if((front == NULL) && (rear == NULL))
    printf("\n QUEUE IS EMPTY");

    else{
        temp = front;
        while(temp){
            printf(" %d ", temp->data);
            temp = temp->next;
        }
    }
}
