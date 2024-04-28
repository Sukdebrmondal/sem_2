#include<stdio.h>
#include<stdbool.h>
#define len 5
int arr[len];
bool bl[len]; 
int front = 0;
int rear = -1;

int isfull(){
    if(bl[(rear+1)%len] == true){
        return 1;
    }
    else
        return 0;
}

int isempty(){
    if(bl[front]==false){
        return 1;
    }
    else
        return 0;
}
void display(){
    // for(int i = 0;i<len;i++){
    //     printf("%d ",arr[i]);
    // }
    // printf("\n");
    // for(int i = 0;i<len;i++){
    //     printf("%d ",bl[i]);
    // }
    // printf("\n");

    int i = front;
    printf("queue is : ");
    if(i == 0){
        for(;i<len;i++){
            if(bl[i] == true){
                printf("%d ",arr[i]);
            }
        }
    }
    else{
        for(;i<len;i++){
            if(bl[i] == true){
                printf("%d ",arr[i]);
            }
        }
        if(bl[0] == true){
            for(int i = 0;i<=rear;i++){
                printf("%d ",arr[i]);
                
            }
        }
    }
    
    
    printf("\n");
    printf("\n");

}

void enqueue(int n){
    if(isfull())
        printf("overflow\n");
    else{
        rear = (rear+1)%len;
        arr[rear] = n;
        bl[rear] = true;
    }
    display();
}

void dequeue(){
    if(isempty()){
        printf("underflow\n");
    }
    else{
        bl[front] = false;
        front = (front+1)%len;
    }
    display();
}

int main(){
   int ch,n;
    printf("1 - enqueue , 2 - dequeue , 3 - exit\n");
    while(1){
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("enter the element : ");
            scanf("%d",&n);
            enqueue(n);
            break;
        case 2:
            dequeue();
            break;
        default:
            return 0;
            break;
        }
    }   

}

/*
1 - enqueue , 2 - dequeue , 3 - exit
1
enter the element : 55
queue is : 55

1
enter the element : 97
queue is : 55 97

1
enter the element : 56
queue is : 55 97 56

1
enter the element : 34
queue is : 55 97 56 34

2
queue is : 97 56 34

2
queue is : 56 34

1
enter the element : 77
queue is : 56 34 77

1
enter the element : 71
queue is : 56 34 77 71

1
enter the element : 39
queue is : 56 34 77 71 39

1
enter the element : 46
overflow
queue is : 56 34 77 71 39

2
queue is : 34 77 71 39

2
queue is : 77 71 39

2
queue is : 71 39

2
queue is : 39

2
queue is :

2
underflow
queue is :
*/