//d5
//5.write a program to convert temperature from Centigrade to Fahrenhite and vice-versa 

#include<stdio.h>
float c_to_f(float c);
float f_to_c(float f);
int main()
{
	int choice;
	printf("enter which do you want to do: \n");
	printf("1 for C to F, 2 for F to C: \n");
	scanf("%d",&choice);
	
	if (choice == 1)
	{
	
		float C;
		printf("enter temperature in C: ");
		scanf("%f",&C);
		printf("%f celsius to fahrenheit is %f",C,c_to_f(C));
	}
		
	else if(choice == 2)
	{
		float F;
		printf("enter temperature in F: ");
		scanf("%f",&F);
		printf("%f fahrenheit to celsius is %f",F,f_to_c(F));
	}
	return 0;
}

float c_to_f(float c)
{
	float f;
	f = ((9*c)/5)+32;
	return f;	
}

float f_to_c(float f)
{
	float c;
	c = ((f-32)/9)*5;
	return c;
}
