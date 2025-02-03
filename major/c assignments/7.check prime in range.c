//Write a program to find out the prime numbers within a given range.

#define OR ||
#include<stdio.h>
#include<math.h>
int check_prime(int);
int main()
{
	int n,a;
	printf("enter the range like(a b): ");
	scanf("%d %d",&a,&n);
	for(a;a<=n;a++)
	{
		if (check_prime(a) == 0)
			printf("%d is a prime number\n",a);
		// else if(check_prime(a) == 1)
		// 	printf("%d is not a prime number\n",a);
		else if(check_prime(a) == 2)
			printf("%d is nither a prime nor non-prime number\n",a);
		else if(check_prime(a) == 3)
			printf("%d is a negative number\n",a);
	}
}
int check_prime(int n)
{
	if(n<0)
		return 3; // representing negative numebrs
	else if ((n == 0) OR (n == 1))
		return 2; // neither prime nor non-prime
	else
	{
		int count = 0;
		int range = sqrt(n) + 1;
		for(int i = 1;i<range;i++)
		{
			if (n%i == 0)
			{
				count += 1;
				if (count > 1)
				{
				return 1; // for non-prime numbers
				break;
				}
			}
		}
		if (count == 1)
		{
			return 0; // for prime numbers
		}
	}
}
