#include<stdio.h>
#include<stdlib.h>
int main()
{
    int* ptr=(int*) malloc(10*4);//00B52F50
    printf("%p\n",ptr);
    ptr=realloc(ptr,200000*4);//00B6A020
    printf("%p\n",ptr);
}