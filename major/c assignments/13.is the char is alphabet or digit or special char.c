//d13
//Write a program to check a character is an alphabet, digit or special character.
#include<stdio.h>
#define AND &&
#define OR ||
int main()
{	
	char a;
	printf("enter the character: ");
	scanf("%c",&a);
	if((a >= 33 AND a<= 47) OR (a >= 58 AND a<= 64) OR (a >= 91 AND a<= 96) OR (a >= 123 AND a<= 126))
		printf("%c is a special character\n",a);

	else 
		if (a >= 48 AND a <= 57)
			printf("%c is a digit\n",a);
		else 
			if((a >= 65 AND a <= 90) OR (a>=97 AND a<=122))
				printf("%c is an alphabet\n",a);
			else
				printf("Unknown Character");

	return 0;
}