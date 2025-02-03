//d3
// 3.write a programm to find out the area of a triangle. square and rectangle
#include<stdio.h>
#include<math.h>
#define AND &&
#define OR ||

float area_tri(float a,float b,float c);
 
int main()
{
	int choice;
	printf("enter which area do you want to get: \n");
	printf("1 for rectangle,2 for square,3 for triangle: ");	
	scanf("%d",&choice);
	
	if (choice == 1)
	{
		//rectangle
		float length,breadth;
		printf("enter the value of length: ");
		scanf("%f",&length);
		printf("enter the value of breadth: ");
		scanf("%f",&breadth);
        printf("the area of the rectangle is: %f",length*breadth);	
	}
	else if(choice == 2)
	{
		float side;
		printf("enter the value of one side: ");
		scanf("%f",&side);
		printf("the area of the square is: %f",side*side);	
	}
	else if(choice == 3)
	{
		float a,b,c;
		printf("enter the value of three sides of the triangle:\n");
        printf("a: ");
		scanf("%f",&a);
        printf("b: ");
        scanf("%f",&b);
        printf("c: ");
        scanf("%f",&c);
        
        if (a+b>c AND a+c>b AND c+b>a)
            printf("the area of the triangle is %f",area_tri(a,b,c));
        else
            printf("triangle can not be created");
	}
	else
		printf("invalid input");
}

float area_tri(float a,float b,float c)
{
	float s,area;
	s = (a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	return area;
}
