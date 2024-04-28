#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int info;
struct node * add;
}node;
node * head;
void append(int a);
void inst_at_bgn(int a);
void inst_at_pos(int a,int pos);
void display();
int main(){
    printf("\n1 for inserting at front\n2 for inserting at position\n3 for appending at the end\n4 for exit\n");
    int ch = 0,a,pos;
    while(ch!=4){
        printf("enter choice: \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            printf("enter element: \n");
            scanf("%d",&a);
            inst_at_bgn(a);
            break;
            case 2:
            printf("enter element: \n");
            scanf("%d",&a);
            printf("enter position: \n");
            scanf("%d",&pos);
            inst_at_pos(a,pos);
            break;
            case 3:
            printf("enter element: \n");
            scanf("%d",&a);
            append(a);
            break;
            default:
            ch = 4;
        }
    }
}
void display(){
    node * t = head;
    if(head == NULL){
        printf("no node in the linked list");
        return;
    }
    else{
        do{
            printf("%d ",t->info);
            t = t->add;
        }while(t!=head);
        printf("\n");
    }
}
void inst_at_pos(int val, int pos) {
    if (pos <= 0){
        printf("Invalid position! Please enter a positive position.\n");
        return;
    }
    if (pos == 1) {
        inst_at_bgn(val);
        return;
    }
    node *t = (node *)malloc(sizeof(node));
    t->info = val;
    node *temp = head;
    int i = 1;
    while (temp->add != head && i < pos - 1) {
        temp = temp->add;
        i++;
    }
    if (i != pos - 1) {
        printf("can't insert %d at this position %d!! \n",val,pos);
        free(t);
        return;
    }
    t->add = temp->add;
    temp->add = t;
    display();
}
void inst_at_bgn(int a){
    node * t = (node *)malloc(sizeof(node));
    node * t2 = head;
    t->info = a;
    t->add = NULL;
    if(head == NULL){
        head = t;
        t->add = head;
    }
    else{
        t->add = t2;
        while(t2->add != head){
            t2 = t2->add;
        }
        t2->add = t;
        head = t; 
    }
    display();
}
void append(int a){
    node * t = (node *)malloc(sizeof(node));
    node * t2;
    t2 = head;
    t->info = a;
    t->add = NULL;
    if (head == NULL){
        head = t;
        t->add = head;
    }
    else{
        while(t2->add != head){
            t2 = t2->add;
        }
        t->add = t2->add;
        t2->add = t;
    }
    display();
}