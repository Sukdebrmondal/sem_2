#include<stdio.h>
#include<stdlib.h>

void traverse();
void insertEnd();
void insert_any_location();

struct Node{
    int info;
    struct Node *next;   
};

struct Node *start = NULL;

int main(){
    int choice;
    while(1){
        printf("\n1.Exit\n2.Traverse\n3.Insert an element\n4.Insert at any location\n");
        printf("\nEnter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                exit(0);
            case 2:
                traverse();
                break;
            case 3:
                insertEnd();
                break;
            case 4:
                insert_any_location();
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
        printf("\nValue of linked list are: \n");
        while(temp!=NULL){
            printf("%d\t", temp->info);
            temp= temp->next;
        }
    }
}

void insertEnd(){
    struct Node *newnode,*temp;
    int item;
    newnode = (struct Node *)malloc (sizeof(struct Node));
    if(newnode==NULL){
        printf("\nMemory is not allocated");
    }
    else{
        printf("\nEnter the value to insert: ");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next=NULL;
        if(start == NULL){
            start = newnode;
        }
        else{
           temp = start;
           while(temp->next !=NULL){
                temp = temp->next;
           }
           temp->next= newnode;
        }
    }
}

void insert_any_location(){
    struct Node *newnode, *temp,*ptr;
    int item,pos,count = 1;
    newnode = (struct Node *)malloc(sizeof (struct Node));
    if(newnode == NULL){
        printf("\nMemory is not allocated");
    }
    else{
        printf("Enter the value to insert: ");
        scanf("%d",&item);
        newnode->info=item;
        newnode->next= NULL;
        if(start==NULL){
            start = newnode;
        }
        else{
            printf("\nEnter the position after which you want to insert: ");
            scanf("%d",&pos);
            temp=start;
            while(temp!=NULL && count !=pos){
                count++;
                ptr=temp;
                temp = temp->next;                
            }
            if(temp==NULL){
                printf("\nNode is not present");
            }
            else{
                ptr->next =newnode;
                newnode->next=temp;
            }
        }
    }
}
