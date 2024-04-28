#include<stdio.h>

int GCD(int n, int m) {
    if (n == 0)
        return m;
    else
        return GCD(m % n, n);
}

int main() {
    printf("enter two numbers of which you want to get GCD: \n");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("GCD of %d and %d is %d\n",a,b,GCD(a,b));
    return 0; 
}

/*
enter two numbers of which you want to get GCD:
34 55
GCD of 34 and 55 is 1

enter two numbers of which you want to get GCD:
56 78
GCD of 56 and 78 is 2
*/