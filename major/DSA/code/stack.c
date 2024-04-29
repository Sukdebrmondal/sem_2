#include<stdio.h>
#include<stdlib.h>
#define LEN 5
int stack_arr[LEN];
int top=-1;
void push(int item);
int pop();
int peek();
int isFull();
int isEmpty();
void display();
int main(){
    int choice,item;
    while (1)
    {
        printf("\n\n1.push\n");
        printf("2.pop\n");
        printf("3.Display the item in the top\n");
        printf("4.Display tha stack\n");
        printf("5.exit\n");
        printf("\n\nEnter the choice: ");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            printf("enter the number: ");
            scanf("%d",&item);
            push(item);
            break;
            case 2:
            pop();
            printf("\nThe item is pop is:%d\n",pop());
            break;
            case 3:
            printf("\nThe item is the top is:%d\n",peek());
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
    if(isFull()){
        printf("Stack is overflow\n");
    }
    else{
        top=top+1;
        stack_arr[top]=item;
    }
}
int pop(){
    int item;
    if(isEmpty()){
        printf("stack is underflow!\n");
    }
    else{
        item=stack_arr[top];
        top=top-1;
        return item;
    }
    
}
int peek(){
    if(isEmpty()){
        printf("Stack is underflow!");
        exit(1);
    }
    return stack_arr[top];

}
int isFull(){
    if(top==(LEN-1)){
        return 1;
    }
    else{
        return 0;
    }

}
int isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    }

}
void display(){
    if(isEmpty()){
        printf("Stack is underflow\n");
    }
    else{
        printf("stack elements is:\n");
        for(int i=top;i>=0;i--){
            printf("%d ",stack_arr[i]);
        }
        printf("\n");
    }

}
