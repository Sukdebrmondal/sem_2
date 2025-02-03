
//d10
//Write a program to generate the Fibonacci series up to Nth term.

#include<stdio.h>
int main()
{
	int n,a,b,i,z,t;
	a = 0;b = 1;
	printf("enter the n th number: ");
	scanf("%d",&n);

	for(i = 0;i<n;i++)
	{
		if((i==0)||(i==1))
		{
			printf("%d ",i);
		}
		else
		{
			z = a+b;
			t = b;
			b = z;
			a = t;
			printf("%d ",z);
		}
	}

	return 0;
}