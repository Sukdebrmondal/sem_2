//d6
//Write a program to generate a marksheet based on “Gradation” for a given marks

#include<stdio.h>
#define AND &&
int main()
{
	int mark;
	printf("enter your obtained marks: ");
	scanf("%d",&mark);

	if(mark>=80 AND mark<=100)
		printf("your grade is AA");
	else if(mark<80 AND mark>=75)
		printf("your grade is A");
	else if(mark<75 AND mark>=70)
		printf("your grade is B");
	else if(mark<70 AND mark>=60)
		printf("your grade is C");
	else if(mark<60 AND mark>=0)
		printf("your grade is D");
	else if(mark>100)
		printf("Invalid input");
	else
		printf("Invalid input");
}