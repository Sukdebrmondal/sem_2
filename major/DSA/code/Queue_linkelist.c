#include<stdio.h>
#include<stdlib.h>

struct node{
    int info;
    struct node *link;
}*front = NULL, *rear = NULL;

void Enqueue(int item);
int Dequeue();
int peek();
void display();
int isempty();

int main(){
    int ch, item;
    while(1){
        printf("\n1.Insert item\n2.Delete item\n3.Display the element at the front\n4.Display all elements in the Queue\n5.Exit\n");
        printf("Enter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("Enter the element to add to the Queue: ");
                scanf("%d",&item);
                Enqueue(item);
                break;
            case 2:
                printf("The Deleted element is :%d",Dequeue());
                break;
            case 3:
                printf("Element at the front in the queue is:%d",peek());
                break;
            case 4:
                display();
                break;
            case 5:
                exit(1);
                break;
            default:
                printf("Wrong input!");
        }
    }
}

void Enqueue(int item){
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    if(tmp == NULL){
        printf("Queue is underflow!");
        return;
    }
    tmp->info = item;
    tmp->link = NULL;
    if(front == NULL){
        front = tmp;
    }
    else{
        rear->link = tmp;
    }
    rear = tmp;
}

int isempty(){
    if(front == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int Dequeue(){
    struct node *tmp;
    int item;
    if(isempty()){
        printf("Queue is underflow");
        exit(1);
    }
    tmp = front;
    item = tmp->info;
    front = front->link;
    free(tmp);
    return item;
}

int peek(){
    if(isempty()){
        printf("Queue is underflow");
        exit(1);
    }
    else{
        return front->info;
    }
}

void display(){
    struct node *ptr;
    ptr = front;
    if(isempty()){
        printf("Queue is underflow");
        return;
    }
    printf("The queue is: ");
    while(ptr != NULL){
        printf("%d ",ptr->info);
        ptr = ptr->link;
    }
    printf("\n");
}
