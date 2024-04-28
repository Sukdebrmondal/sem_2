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

void display(){
    node * t;
    t = head;
    while(t != NULL){
        printf("%d ",t->info);
        t = t->add;
    }
}

int main(){
    append(42);
    append(15);
    append(55);
    display();
}