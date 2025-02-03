//write a function to calculate the nth fibonacci number using recursion
/*
## simple method ##
#include<stdio.h>
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int a;
    int b;
    int c;
    a=0;
    b=1;
    c=0;
    for(int i=0;i<=n-1;i++){
        printf("%d",b);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}
*/
//using recursion
#include<stdio.h>
int fibo (int n ){
    //base case
    if (n==1||n==2) return 1;   
    int ans1=fibo(n-1);
    int ans2=fibo(n-2);
    int ans = ans1+ans2;
    return ans;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    //int f=fibo(n);
    //printf("%d",f);
    printf("%d",fibo(n));
    return 0;
}
