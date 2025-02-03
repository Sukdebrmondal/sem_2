//d8
//Write a program to find out the factors of a given number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	printf("factors of the number %d is\n",n);
	for(int i = 1;i<(n+1);i++)
	{
		if(n%i == 0)
		{
			printf("%d ",i);
		}
	}
}