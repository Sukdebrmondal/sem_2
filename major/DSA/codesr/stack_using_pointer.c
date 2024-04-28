#include<stdio.h>
#define S_SIZE 5

void push(int elem,int* stack,int *index);
void pop(int* stack,int *index);
void peek(int* stack,int *index);
void isFull(int *index);
void isEmpty(int *index);
void display(int *stack,int size);

int main(){

    // initilization of the stack;
    int index = 0; // index points to the first empty place
    int arr[S_SIZE] = {0};
    int choice,num;

    do{
        printf("enter your choice: \n 1-> push .2-> pop\n 3-> peek \n 4-> display stack \n 5-> isEmpty. 6-> isFull \n 7-> exit :\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("enter element: \n");
                scanf("%d",&num);
                push(num,arr,&index);
                break;
            case 2:
                pop(arr,&index);
                break;
            case 3:
                peek(arr,&index);
                break;
            case 4:
                display(arr,S_SIZE);
                break;
            case 5:
                isEmpty(&index);
                break;
            case 6:
                isFull(&index);
                break;
            case 7:
                return 0;
                break;
            default:
                printf("wrong input!!\n");
        }
    }while(choice!=7);   
}

void display(int *stack,int size){
    for(int i = 0;i<size;i++){
        printf("%d ",*(stack+i));
    }
    printf("\n");
}

void isEmpty(int *index){
    if (*index == 0){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}

void isFull(int *index){
    if (*index == S_SIZE){
        printf("true\n");
    }
    else{
        printf("false\n");
    }
}

void peek(int* stack,int *index){
    if(*index == 0){
        printf("no element to peek!!\n");
    }
    else{
        printf("the top most element in the stack is %d\n",*(stack+(*index)-1));
    }
}

void pop(int *stack,int *index){
    if((*index)-1 > -1){
        *(stack+(*index)-1) = 0;
        (*index)--;
        printf("element popped,successfully!!\n");

    }
    else{
        printf("underflow.stack is empty!!\n");
    }
}


void push(int elem,int *stack,int *index){
    int i;
    for(i = 0;i<S_SIZE;i++){
        if(*index<S_SIZE){
            if(*(stack+i) == 0){
                *index = i;
                *(stack+*index) = elem;
                (*index)++;
                printf("element pushed,successfully!!\n");
                break;
            }
        }
        else{
            printf("overflow.the stack is full!!\n");
            break;
        }
    }
}