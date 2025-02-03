#include<stdio.h>
int main(){
    int a;
   // printf("enter the 1st number: ");
    scanf("%d",&a);
    int ch;
   // printf("The the symbol: ");
    scanf("%c",&ch);
    int b;
   // printf("\nenter the 2st number: ");
    scanf("%d",&b);

  //  printf("press 1->Add\npress 2->sub\n press 3->multiple\npress 4->Devision");
    switch (ch)
    {
    case '+':
        printf("the sum is:%d ",a+b);
        break;
    case '-':
        printf("the sum is:%d ",a-b);
        break;
    case '*':
        printf("the sum is:%d ",a*b);
        break;
    case '=':
        printf("the sum is:%f ",(float)a/b);
        break;
    default:
    printf("Worng input");
        break;
    }

/*
    if(ch=='+'){
        printf("the sum is:%d ",a+b);
    }
   // printf("the sum is:%d ",a+b);
   
    if(ch=='-')
        printf("the subtraction is:%d ",a-b);
        
    
    if(ch=='*')
        printf("the Multiplication is:%d ",a*b);
        
  
    if(ch=='/')
        if(a>b){
            printf("The result is:%f ",a/b);
        }
        else{
            printf("can not be devided");
        }   */ 


}