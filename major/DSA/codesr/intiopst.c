#include<stdio.h>
#include<string.h>
#define lenght 50

int arr[lenght];
int top = -1;



int isfull(){
    if (top == lenght-1)
        return 1;
    else
        return 0;
}

int isempty(){
    if (top == -1)
        return 1;
    else
        return 0;
}

void display(){
    for(int i = 0;i<=top;i++){
        printf("%c ",arr[i]);
    }
    printf("\n");
}

void push(int n){
    if (isfull() == 1){
        printf("the stack is overflow!!\n");
    }
    else{
        top++;
        arr[top] = n;
    }
    display();
}

int pop(){
    int a;
    if (isempty() == 1){
        printf("the stack is underflow!!");
        a = -1;
    }
    else{
        a = arr[top];
        top--;
        
    }
    display();
    return a;
}

int isopr(int a){
    return(a == '+' || a == '-' || a == '*' || a == '/' || a == '^');
}

int prec(int a,int b){
    if(b == 43 || b == 45){
        if(a == 43 || a == 45){
            return 0;
        }
        else if(a == 42 || a == 47 || a == 94){
            return 1;
        }
    }
    else if(b == 42 || b == 47){
        if (a == 94){
            return 1;
        }
        else
            return 0;
    }
    else if(b == 94){
        return 1;
    }
}

int main(){
    char str[50];
    char post[50];int ind = 0;
    printf("enter infix expression: \n");
    gets(str);

    for(int i = 0;i<strlen(str);i++){
        if (isopr(str[i])){
            if(arr[top] == '('){
                push(str[i]);
            }
            else if(isopr(arr[top])){
                if(prec(arr[top],str[i]) == 1){
                    post[ind] = pop();ind++;
                    push(str[i]);
                }
                else{
                    push(str[i]);
                }
            }
            else{
                push(str[i]);
            }
        }
        else if(str[i] == '('){
            push(str[i]);
        }
        else if(str[i] == ')'){
            while(arr[top]!='('){
                post[ind] = pop();ind++;
            }
            pop();
        }
        else{
            post[ind] = str[i];ind++;
        }
    }
    while(!isempty()){
        post[ind] = pop();ind++;
    }
    printf("the postfix expression is \n");
    for(int i = 0;i<ind;i++){
        printf("%c",post[i]);
    }
}

/*
enter infix expression:
((A+B)–C*(D/E))+F
(
( (
( ( +
( (
(
( -
( - *
( - * (
( - * ( /
( - * (
( - *
( -
(

+

the postfix expression is
AB+CDE/*-F+
*/