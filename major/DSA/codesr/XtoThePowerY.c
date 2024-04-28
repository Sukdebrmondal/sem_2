#include<stdio.h>
long int power(int x,int y){
	if(y == 0)
		return 1;
	else{
		return (x*power(x,y-1));}
}
int main(){
	long int a;
	int b,c;
	printf("enter two number as  b to the power c: \n");
	printf("b: ");
	scanf("%d",&b);
	printf("c: ");
	scanf("%d",&c);
	a = power(b,c);
	printf("%ld\n",a);

}

/*
enter two number as  b to the power c:
b: 12
c: 2
144
*/