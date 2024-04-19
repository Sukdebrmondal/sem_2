#include<stdio.h>
#define LEN 5
int arr[LEN];
int rear=-1;
int front=0;
void enqueue(int a){
    if(rear==LEN-1){
        printf("Queue is overflow\n");
    }
    else{
    rear=rear+1;
    arr[rear]=a;
    for(int i=front;i<LEN;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
}

void dequeue()
{
    if(rear==-1&& front==0){
        printf("underflow\n");
    }
    else if(rear<front){
        printf(" Queue is underflow\n");
    }
    else{
    front++;
    for(int i=front;i<LEN;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    }
}    
    
    
int main(){

    int ch = 1;
    printf("1->enqueue\n2->dequeue\n3->Exit\nEnter the choice:");
    while(ch!=0){
        scanf("%d",&ch);
        switch(ch){
            case 1:
                int x;
                scanf("%d",&x);
                enqueue(x);
                break;
            case 2:
                dequeue();
                break;
            default: 
                return 0;
                break;
        }
    }    
   
    return 0;
}