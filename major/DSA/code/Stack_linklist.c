#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
}*top = NULL;

void push(int item);
int pop();
int peek();
void display();
int isEmpty();

int main(){
    int ch,item;
    while (1)
    {
        printf("\n\n1.push\n");
        printf("2.pop\n");
        printf("3.Display the item in the top\n");
        printf("4.Display the items in the stack\n");
        printf("5.exit\n");
        printf("\n\nEnter the choice: ");
        scanf("%d",&ch);
        switch (ch){
            case 1:
                printf("Enter the item to be pushed in the stack: ");
                scanf("%d",&item);
                push(item);
                break;
            case 2:
                if(!isEmpty()){
                    printf("\nThe item popped is: %d\n",pop());
                } else {
                    printf("\nFailed to pop item. Stack is empty.\n");
                }
                break;
            case 3:
                if(!isEmpty()){
                    printf("\nThe item at the top is: %d\n",peek());
                } else {
                    printf("\nStack is empty.\n");
                }
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Wrong input!\n");
                break;
        }
    }    
}

void push(int item){
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(tmp == NULL){
        printf("Stack is overflow!\n");
        return;
    }
    tmp->info = item;
    tmp->link=top;
    top = tmp;
}

int pop(){
    struct node *tmp;
    int item;
    if(isEmpty()){
        printf("Stack is underflow!\n");
        exit(1);
    }
    tmp=top;
    item = tmp->info;
    top = top->link;
    free(tmp);
    return item;
}

int peek(){
    if(isEmpty()){
        printf("Stack is underflow!\n");
        exit(1);
    }
    return top->info;
}

int isEmpty(){
    return top == NULL;
}

void display(){
    struct node *ptr;
    ptr=top;
    if(isEmpty()){
        printf("Stack is underflow!\n");
        return;
    }
    printf("Stack Elements are:\n ");
    while(ptr!=NULL){
        printf("%d\n",ptr->info);
        ptr = ptr->link;
    }
    printf("\n");
}
