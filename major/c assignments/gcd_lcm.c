//d1
//GCD and LCM of two numbers
//Write a program to find out the G.C.D and L.C.M of two numbers.

// #include<stdio.h>
// int main()
// {
// 	int a,b,t,x,y,z,LCM;
// 	printf("enter two numbers(a b): ");
// 	scanf("%d %d",&a,&b);
// 	x = a,y = b;
// 	while(a!=0)
// 	{
// 		t = a;
// 		a = b%a;
// 		b = t;
// 	}
// 	printf("value of G.C.D is %d\n",b);
// 	z = x*y;
// 	LCM = z/b;
// 	printf("value of L.C.M is %d\n",LCM);
// 	return 0;
	
// }



#include <stdio.h>

int main() {
    int a, b, r;
    printf("Enter two numbers (a b): ");
    scanf("%d %d", &a, &b);
    
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
        printf("Remainder: %d\n", r);
    }
    
    printf("GCD is: %d\n", a);
    return 0;
}
