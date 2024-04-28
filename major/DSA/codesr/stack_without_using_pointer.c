#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define LENGTH 5
int arr[LENGTH] = {0};
// be careful that , this array is capable ot store integer values
int top = -1;

bool isFull(){
    if (top==LENGTH-1){
        return true;
    }
    else{
        return false;
    }
}
bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
void display(){
    if(top>-1&&top<LENGTH){
        for(int i = 0;i<=top;i++){
            printf("%d ",arr[i]);
        }
    }
    printf("\n");
}
void push(int num){
    if(isFull() == false){
        top++;
        arr[top] = num;
    }
    else{
        printf("overflow!!\n");
    }
    display();
}
int pop(){
    if(isEmpty() == false){
        int a = arr[top];
        top--;
        display();
        return a;
    }
    else{
        printf("underflow\n");
    }
}
void peek(){
    if(top>-1&&top<LENGTH){
        printf("%d \n",arr[top]);
    }
}


int main(){
    int choice,num;
    bool em,fl;
    do{
        printf("enter your choice: \n 1-> push .2-> pop 3-> peek  4-> display stack \n 5-> isEmpty. 6-> isFull  7-> exit :\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
                printf("enter element: \n");
                scanf("%d",&num);
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                em = isEmpty();
                printf("%d\n",em);
                break;
            case 6:
                fl = isFull();
                printf("%d\n",fl);
                break;
            case 7:
                exit(1);
            default:
                printf("wrong input!!\n");
        }
    }while(choice!=7);   
}

/*
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
43
43
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
62
43 62
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
75
43 62 75
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
25
43 62 75 25
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
98
43 62 75 25 98
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
1
enter element:
34
overflow!!
43 62 75 25 98
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2
43 62 75 25
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2
43 62 75
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2
43 62
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2
43
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2

enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
2
underflow
enter your choice:
 1-> push .2-> pop 3-> peek  4-> display stack
 5-> isEmpty. 6-> isFull  7-> exit :
7
*/