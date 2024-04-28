#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node * add;
}node;
node * head;

void inst_in_fnt(int a){ 
    node *t = (node *)malloc(sizeof(node));
    t->info = a;
    t->add = NULL;

    if(head == NULL){
        head = t;
    }
    else{
        t->add = head;
        head = t;
    }
}
void display(){
    node * t = head;
    while(t != NULL){
        printf("%d ",t->info);
        t = t->add;
    }
}
int main(){
    inst_in_fnt(34);
    inst_in_fnt(96);
    inst_in_fnt(28);
    display();
}