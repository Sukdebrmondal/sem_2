#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
char stack[100];
int top=-1; int size;
void push(char item)
{
    if(top==size-1){
        printf("\nStack is overflow1");
    }
    else{
        top++;
        stack[top]=item;
    }
}
char pop(){
    char item;
    if(top==-1){
        printf("Stack is underflow!");
    }
    else{
        item=stack[top];
        top--;
        return item;
    }
}
int is_operator(char symbol){
    if(symbol=='^'|| symbol=='/'|| symbol=='*'|| symbol=='%'|| symbol=='+'|| symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }   
}
int precedence(char symbol){
    if(symbol=='^'){
        return 3;
    }
    else if(symbol=='*'|| symbol=='/'||symbol=='%'){
        return 2;
    }
    else if(symbol=='+'|| symbol=='-'){
        return 1;
    }
    else{
        return 0;
    }
}
//process convert infix to postfix
void infixtoposfix(char infix_exp[],char postfix_exp[])
{
    int i,j;
    char item,x;
    push('(');
    strcat(infix_exp,")");
    i=0;
    j=0;
    item=infix_exp[i];
    while (item!='\0')
    {
        if(item=='('){
            push(item);
        }
        else if(isdigit(item) || isalpha(item)){
            postfix_exp[j]=item;
            j++;
        }
        else if(is_operator(item)==1){
            x=pop();
            while ((is_operator(x)==1) && (precedence(x)>=precedence(item))){
                postfix_exp[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(item);   
        }
        else if(item==')'){
            x=pop();
            while (x!='(')
            {
                postfix_exp[j]=x;
                j++;
                x=pop();
            }    
        }
        else{
            printf("\ninvalid expression!\n");
            exit(0);
        }
        i++;
        item=infix_exp[i];
    }
    postfix_exp[j]='\0';
}
int main()
{
    char infix[100],postfix[100];
    printf("Enter the size of stack: ");
    scanf("%d",&size);
    printf("\nAssume the infix expression contains single letter variables and single digit numbers");
    printf("Enter the infix expression= ");
    scanf("%s",infix);
    infixtoposfix(infix,postfix);
    printf("\npostfix expression= ",postfix);
    return 0;
}
