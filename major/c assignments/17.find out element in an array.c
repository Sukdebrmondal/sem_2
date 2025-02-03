//Write a program to find out an element in an array.

#include<stdio.h>
int main()
{
    int a,n,count = 0;
    printf("enter the number of the elements in the array: ");
    scanf("%d",&a);
    char arr[a];
    for(int i = 0;i<a;i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("enter the element to find: ");
    scanf("%d",&n);
    for(int i = 0;i<a;i++)
    {
        if (arr[i]==n)
        {
            count++;
            printf("the element is found!!\n");
            printf("index number is %d\n",i+1);
        }    
    }
    if(count==0)
        printf("there is no existance of this element in the array!!");
}