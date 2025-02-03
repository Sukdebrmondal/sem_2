//d14
//Write a program to print the elements of an array in reverse order

#include<stdio.h>
int main()
{
	int n;
	printf("enter the number of elements in the array: ");
	scanf("%d",&n);
	char arr[n];
	for(int i = 0;i<n;i++)
	{
		printf("arr[%d] = ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("reversed elements of the array is :\n");
	for(int i = (n-1);i>=0;i--)
	{
		printf("%d ",arr[i]);
	}

	return 0;
}

