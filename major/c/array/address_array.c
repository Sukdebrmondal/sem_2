/*
#include<stdio.h>
int main(){
    int arr[5]= {1,3,5,6,7};
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[1]);
    printf("%p\n",&arr[2]);
    printf("%p\n",&arr[3]);
    printf("%p\n",&arr[4]);
    return 0;
}
*/
#include<stdio.h>
int main(){
    int sub[50],i;
    for(i=0;i<=48;i++);
    {
        sub[i]=i;
        printf("\n%d",sub[i]);
    }
}