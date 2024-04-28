
#include<stdio.h>
#include<stdlib.h>
void traverse();
void insertbegin();

struct Node{
    int info;
    struct Node *next;   
};
struct Node *start = NULL;
int main(){
    int choice;
    while(1){
        printf("\n1.Exit\n2.Traverse\n3.Insert at Beginning\n");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                exit(0);
            case 2:
                traverse();
                break;
            case 3: 
                insertbegin();
                break;
            default:
                printf("\nWrong choice\n");
        }
    }
}
void traverse(){
    struct Node *temp;
    if(start == NULL){
        printf("\nList is Empty");
    }
    else{
        temp=start;
        printf("\n value of linked list are: \n");
        while(temp!=NULL){
            printf("%d\t", temp->info);
            temp= temp->next;
        }
    }
}

void insertbegin(){
    struct Node *newnode;
    int item;
    newnode = (struct Node *)malloc (sizeof(struct Node));
    if(newnode==NULL){
        printf("\nMemory is not allocated");
    }
    else{
        printf("\nEnter the value to insert: ");
        scanf("%d",& item);
        newnode->info=item;
        newnode->next=NULL;
        if(start == NULL){
            start = newnode;
        }
        else{
            newnode->next = start;
            start= newnode;
        }
    }
}
