#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node * add;
}node;

node * head;

void display(){
    node * t;
    t = head;
    while(t != NULL){
        printf("%d ",t->info);
        t = t->add;
    }
    printf("\n");
}

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
    display();
}

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
    display();
}

void inst_at_a_pos(int val,int pos){
    int i = 1;
    if(pos == 1){
        inst_in_fnt(val);
    }
    else if(pos > 1){
        node * t = head;
        while(t != NULL){
            i++;
            if(i == pos){
                node *t2 = (node *)malloc(sizeof(node));
                t2->info = val;
                t2->add = t->add;
                t->add = t2;
                display();
                return;
            }
            t = t->add;
        }
        if(i<pos){
            printf("can't insert %d at this position %d!! \n",val,pos);
            return;
        }
    }
}


int main(){
    printf("1 for inserting at front\n2 for inserting at position\n3 for appending at the end\n4 for exit\n");
    int ch = 0,a,pos;
    while(ch!=4){
        printf("enter choice: \n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("enter element: \n");
                scanf("%d",&a);
                inst_in_fnt(a);
                break;
            case 2:
                printf("enter element: \n");
                scanf("%d",&a);
                printf("enter position: \n");
                scanf("%d",&pos);
                inst_at_a_pos(a,pos);
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


/*
1 for inserting at front
2 for inserting at position
3 for appending at the end
4 for exit
enter choice:
1
enter element:
46
46
enter choice:
1
enter element:
79
79 46
enter choice:
3
enter element:
37
79 46 37
enter choice:

3
enter element:
91
79 46 37 91
enter choice:
2
enter element:
58
enter position:
2
79 58 46 37 91
enter choice:
2
enter element:
67
enter position:
1
67 79 58 46 37 91
enter choice:
2
enter element:
62
enter position:
7
67 79 58 46 37 91 62
enter choice:
2
enter element:
82
enter position:
9
can't insert 82 at this position 9!!
enter choice:
2
enter element:
82
enter position:
8
67 79 58 46 37 91 62 82
enter choice:
4
*/