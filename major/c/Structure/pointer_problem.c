/*
#include<stdio.h>
int main(){
    int x=4;
    int y=5;
    int*a=&x;
    int *b=&y;
    printf("x-%d\n",x);
    printf("y-%d\n",y);
    printf("x-%p\n",&x);
    printf("y-%p\n",&y);
    printf("a-%d\n",*a);
    printf("b-%d\n",*b);
    printf("a-%p\n",&a);
    printf("b-%p\n",&b);
    printf("a-%d\n",a);
    printf("b-%d",b);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int x=7,y=9;
    printf("%d\n",x);
    printf("%d\n",y);
    int *a=&x,*b=&y;
    printf("%p\n",&a);
    printf("%p\n",&b);
    printf("%d\n",*a); 
    printf("%d\n",*b);
    return 0;
}
*/   
#include<stdio.h>
int main(){
    typedef int *sukdeb;
    int x=4;int y=5;
    sukdeb a=&x,b=&y;
    printf("%p\n",a);
    printf("%p\n",a);
    return 0;
}


