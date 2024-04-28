#include<stdio.h>
void convert(int n){
	if(n == 1 || n == 0)
		printf("%d",n);
	else{
	convert(n/2);
	printf("%d",n%2);
	}
}

int main(){
	printf("enter the number to convert in binary: \n");
	int a;
	scanf("%d",&a);
	printf("binary of %d is :\n",a);
	convert(a);
	printf("\n");
}

/*
enter the number to convert in binary:
261
binary of 261 is :
100000101
*/