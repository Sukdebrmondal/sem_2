
#include<stdio.h>
int powerlog(int a, int b){
    if (b==0) return 1;
    if(b==1) return a;
    int x= powerlog(a, b/2);
    // even
    if(b%2==0){
        return x*x;
    }
    // odd
    else{
        return x*x*a;
    }
}
int main(){
    int a;
    printf("eneter the base: ");
    scanf("%d",&a);
    int b;
    
    printf("eneter the power: ");
    scanf("%d",&b);
    int p = powerlog(a,b);
    printf("%d",p);
    return 0;
}