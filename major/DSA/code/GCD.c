#include<stdio.h>
int GCD(int x,int y){
    if(y==0){
        return x;
    }
    else{
        return (y,(x%y));
        
    }

}
int main(){
    int x;
    printf("Enter the 1st number: ");
    scanf("%d",&x);
    int y;
    printf("Enter the 2nd number: ");
    scanf("%d",&y);
    int s=GCD(x,y);
    printf("The GCD is:%d",s);
    return 0;

}