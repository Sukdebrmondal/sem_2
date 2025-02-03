
/*
   *
  * *
 * * *
* * * *
*/

#include<stdio.h>
int main()
{
    int a,j;
    printf("enter the number: ");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=j;k<=a;k++)
        {
            printf("* ");
        }
        printf("\n");

    }
}