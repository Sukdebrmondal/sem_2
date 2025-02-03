//d11
 //11. Write a menu-driven program to implement different arithmetic operations.
#include<stdio.h>
int main()
{
	int choice;
	printf("enter your choice: \n");
	printf("1 for addition\n");
	printf("2 substraction\n");
	printf("3 multiplication\n");
	printf("4 division\n");
	scanf("%d",&choice);
	float a,b;
	printf("first num: ");
	scanf("%f",&a);
	printf("second num: ");
	scanf("%f",&b);
	
	if (choice == 1)
	{
		printf("%f + %f = %f",a,b,a+b);
	}
	else if(choice == 2)
	{
		printf("%f - %f = %f",a,b,a-b);
	}
	else if(choice == 3)
	{
		printf("%f x %f = %f",a,b,a*b);
	}
	else if(choice == 4)
	{
		if (b == 0)
			printf("division by Zero not possible!!");
		else
			printf("%f / %f = %f",a,b,a/b);	
	}
	else
		printf("invalid input");	
	
}
