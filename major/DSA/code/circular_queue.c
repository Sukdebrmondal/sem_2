#include<stdio.h>
#include<stdlib.h>
void Enqueue();
void Dequeue();
void Display();
int Queue[50],size,rear = -1,front=-1;
int main(){
    int choice;
    printf("Enter the size of queue:");
    scanf("%d",&size);
    while(1){
        printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                Enqueue();
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Wrong input!");
        }
    }
}
void Enqueue(){
    int item;
    if((rear==size-1 && front == 0)||(front==rear+1)){
        printf("Queue overflow!");
    }
    else{
        printf("\nEnter the value to insert: ");
        scanf("%d",&item);
        if(rear==-1){
            front++;
            rear++;
        }
        else if(rear==size-1){
            rear=0;
        }
        else{
            rear++;
        }
        Queue[rear]=item;
    }
}
void Dequeue(){
    if(front==-1){
        printf("\nQueue underflow!\n");
    }
    else{
        printf("\nDeleted value:%d",Queue[front]);
        if(rear==front){
            front=-1;
            rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
    }
}
void Display(){
    int i;
    if(front==-1){
        printf("\nQueue is empty!\n");
    }
    else{
        printf("Elements of queue are\n");
        if(front<=rear){
            for(i=front;i<=rear;i++){
                printf("%d ",Queue[i]);
            }
        }
        else{
            for(i=front;i<size;i++){
                printf("%d ",Queue[i]);
            }
            for(i=0;i<=rear;i++){
                printf("%d ",Queue[i]);
            }
        }
    }
}
