
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
        printf("%d ",arr[i]);
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
    if (isempty() == 1){
        printf("the stack is underflow!!");
        return 0;
    }
    else{
        int a;
        a = arr[top];
        top--;
        return a;
    }
    display();
}
int power(int a,int b){
    if(b == 0)
        return 1;
    else
        return a*power(a,b-1);
}

int main(){
    char str[50];
    printf("enter the postfix expression: \n");
    gets(str);
    for(int i = 0;i<strlen(str);i++){
        if(str[i] == '+' ||  str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '^'){
            int opr2 = pop();
            int opr1 = pop();
            if(str[i] == '+'){
                int opr3 = opr1+opr2;
                push(opr3);
            }
            else if(str[i] == '-'){
                int opr3 = opr1-opr2;
                push(opr3);
            }
            else if(str[i] == '*'){
                int opr3 = opr1*opr2;
                push(opr3);
            }
            else if(str[i] == '/'){
                int opr3 = opr1/opr2;
                push(opr3);
            }
            else if(str[i] == '^'){
                int opr3 = power(opr1,opr2);
                push(opr3);
            }
        }
        else{
            push(str[i]-48);
        }
    }
    printf("enswer is :\n");
    printf("%d",pop());
}


/*

enter the postfix expression:
7532^*922^-/+64*+
7
7 5
7 5 3
7 5 3 2
7 5 9
7 45
7 45 9
7 45 9 2
7 45 9 2 2
7 45 9 4
7 45 5
7 9
16
16 6
16 6 4
16 24
40
enswer is :
40

*/