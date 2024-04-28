#include<stdio.h>
#include<stdlib.h>

void create();
void traverse();
void insert_begin();

struct node{
    int info;
    struct node *next;
};
struct node *start = NULL;
int main(){
    int choice;
    while(1){
        printf("\n1.Exit\n2.creation\n3.Traverse\n4.insert at beginning\n");
        printf("Enter the choice");
        scanf("%d",&choice);  
        switch(choice){
            case 1:
                exit(0);
            case 2:
                create();
                break;
            case 3:
                insert_begin();
                break;
            default:
                printf("\nWrong choice\n");
        }  
    }
}
void create(){
    int total,item,index;
    
}


void insert_begin(){
    struct node *newnode,*temp;
    int item;
    newnode =(struct node *)malloc(sizeof(struct node));
    if(newnode==NULL){
        printf("\nmemory is not allocated\n");
        else{
            printf("\nEnter the value to insert\n");
            scanf("%d",&item);
            newnode->info=item;
            newnode->next=newnode;
            if(start==NULL){
                start==newnode;
            }
            else{
                temp=start;
                while(temp->next!=start){
                    temp=temp->next;
                }
                newnode->next=start;
                start = newnode;
                temp->next=newnode;
            }

        }
    }
}