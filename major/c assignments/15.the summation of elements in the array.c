//Write a program to get the summation of all the numbers in an array.

#include<stdio.h>
int main()
{
    int a;
    printf("enter the number of the elements in the array: ");
    scanf("%d",&a);
    char arr[a];
    for(int i = 0;i<a;i++)
    {
        printf("arr[%d] = ",i+1);
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<a;i++)
    {
        sum += arr[i];
    }
    printf("total sum is %d",sum);
}