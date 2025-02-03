//d9
//Write a program to calculate the factorial of a given number.
#include<stdio.h>
int main()
{
	int n,fact = 1;
	printf("enter the number: ");
	scanf("%d",&n);
	if (n >= 0)
	{
		if (n == 0)
			fact = 1;
		else
		{
			for(int i = 1;i<=n;i++)
				fact *= i;
		}
		
		printf("factorial of %d is = %d",n,fact);
	}
	else if(n < 0)
		printf("not defined");
	return 0;

}