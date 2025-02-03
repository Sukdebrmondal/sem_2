//d4.1

//	*
//	* *
//	* * *
//	* * * *


#include<stdio.h>
int main()
{
	int row,i,j;
	printf("enter a number: ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
			if(j == i)
			{
				printf("\n");
			}
		}
	}
}
