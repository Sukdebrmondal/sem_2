#include<stdio.h>
#include<stdlib.h>
typedef struct term{
    int coef;
    int deg;
    struct term * next;
}term;
term * add_term(term * head,int coef,int deg);
void print_pol(term * head);
term * addition(term * res,term * pol1,term * pol2);
int main(){
    term * pol1 = NULL;
    term * pol2 = NULL;
    term * sol = NULL;
    int n1,n2,elem,deg;
    printf("enter the number of terms in 1st polynomial: \n");
    scanf("%d",&n1);
    for(int i = 0;i<n1;i++){
        printf("enter co efficent: ");
        scanf("%d",&elem);
        printf("enter degree: ");
        scanf("%d",&deg);
        pol1 = add_term(pol1,elem,deg);
    }   
    printf("enter the number of terms in 2nd polynomial: \n");
    scanf("%d",&n2);
    for(int i = 0;i<n2;i++){
        printf("enter co efficent: ");
        scanf("%d",&elem);
        printf("enter degree: ");
        scanf("%d",&deg);
        pol2 = add_term(pol2,elem,deg);
    }
    printf("polynomial equations are: \n");
    print_pol(pol1);
    print_pol(pol2);
    sol = addition(sol,pol1,pol2);
    printf("required solution is:\n");
    print_pol(sol);
}
term * add_term(term * head,int coef,int deg){
    term * new_term = (term *)malloc(sizeof(term));
    new_term->coef = coef;
    new_term->deg = deg;
    new_term->next = NULL;
    if(head == NULL){
        head = new_term;
        new_term->next = NULL;
    }
    else{
        term * t = head;
        while(t->next != NULL){
            t = t->next;
        }
        t->next = new_term;
    }
    return head;
}
void print_pol(term * head){
    term * t = head;
    char ch;
    while(t != NULL){
        if(t->deg > 1 || t->deg < 0){
            if((t->next)!=NULL){
                if((t->next)->coef >= 0){
                    ch = '+';
                    printf("%dx^%d %c ",t->coef,t->deg,ch);
                }
                else{
                    printf("%dx^%d ",t->coef,t->deg);
                }
            }
            else{
                printf("%dx^%d ",t->coef,t->deg);
            }
        }
        else if(t->deg == 1){
            if((t->next)!=NULL){
                if((t->next)->coef >= 0){
                    ch = '+';
                    printf("%dx %c ",t->coef,ch);
                }
                else{
                    printf("%dx ",t->coef);
                }
            }
            else{
                printf("%dx ",t->coef);
            }
        }
        else if(t->deg == 0){
            if((t->next)!=NULL){
                if((t->next)->coef >= 0){
                    ch = '+';
                    printf("%d %c ",t->coef,ch);
                }
                else{
                    printf("%d ",t->coef);
                }
            }
            else{
                printf("%d ",t->coef);
            }
        }
        t = t->next;
    }
    printf("= 0");
    printf("\n");
}
term * addition(term * res,term * pol1,term * pol2){
    term *t1 ,*t2;
    int a;
    t1 = pol1;t2 = pol2;
    while(t1 != NULL && t2 != NULL){
        if(t1->deg == t2->deg){
            a = t2->coef+t1->coef;
            res = add_term(res,a,t1->deg);
            t1 = t1->next;t2 = t2->next;
        }
        else if(t1->deg > t2->deg){
            res = add_term(res,t1->coef,t1->deg);
            t1 = t1->next;
        }
        else if(t1->deg < t2->deg){
            res = add_term(res,t2->coef,t2->deg);
            t2 = t2->next;
        }
    }
    while(t1 != NULL){
        res = add_term(res,t1->coef,t1->deg);
        t1 = t1->next;
    }
    while(t2 != NULL){
        res = add_term(res,t2->coef,t2->deg);
        t2 = t2->next;
    }
    return res;
}



/*
enter the number of terms in 1st polynomial: 
5
enter co efficent: 6
enter degree: 5
enter co efficent: 4
enter degree: 3
enter co efficent: -34
enter degree: 2
enter co efficent: 12
enter degree: 1
enter co efficent: 2
enter degree: 0
enter the number of terms in 2nd polynomial:
4
enter co efficent: 8
enter degree: 4
enter co efficent: 5
enter degree: 3
enter co efficent: -4
enter degree: 2
enter co efficent: 2
enter degree: 0
polynomial equations are:
6x^5 + 4x^3 -34x^2 + 12x + 2 = 0
8x^4 + 5x^3 -4x^2 + 2 = 0
required solution is:
6x^5 + 8x^4 + 9x^3 -38x^2 + 12x + 4 = 0
*/