#include<stdio.h>
void tower(int n,char src, char dest , char aux){
	if(n == 1){
		printf("move disk no %d from %c to %c\n",n,src,dest);}
	else{
		tower(n-1,src,aux,dest);
		printf("move disk no %d from %c to %c\n",n,src,dest);
		tower(n-1,aux,dest,src);
	}
}


int main(){
	int a;
	printf("enter the number of disks: \n");
	scanf("%d",&a);
	tower(a,'a','c','b');
}

/*
enter the number of disks:
3
move disk no 1 from a to c
move disk no 2 from a to b
move disk no 1 from c to b
move disk no 3 from a to c
move disk no 1 from b to a
move disk no 2 from b to c
move disk no 1 from a to c
*/