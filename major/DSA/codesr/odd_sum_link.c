#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node * add;
}node;

node * head;

void append(int a){
    node * t,*t2;
    int n;
    t2 = (node *)malloc(sizeof(node));
    t2->info = a;
    t2->add = NULL;
    if(head == NULL){
        head = t2;
    }
    else{
        t = head;
        while(t->add != NULL){
            t = t->add;
        }
        t->add = t2;
    }
}

int main(){
    int n,ele,sum = 0;

    printf("enter how many numbers to enter: \n");
    scanf("%d",&n);
    printf("enter numbers: \n");
    for(int i = 0;i<n;i++){
        scanf("%d",&ele);
        append(ele);
    }
    node * t;
    t = head;
    while(t != NULL){
        if(((t->info)%2) == 1){
            sum = sum+t->info;
        }
        t = t->add;
    }
    printf("sum is %d",sum);
}

/*
enter how many numbers to enter:
10
enter numbers:
27 64 89 41 72 55 33 98 20 76
sum is 245
*/