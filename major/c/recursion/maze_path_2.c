#include<stdio.h>
 int marze(int n, int m){
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){  // can not go down
        rightways+= marze(n,m-1);
    }
    if(m==1){  //can not go right
        downways+= marze(n-1,m);
    }
    if (n>1 && m>1){
        rightways+= marze(n,m-1);
        downways+= marze(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
 }




int main(){
    int n;
    printf("Enter the rows of the marze: ");
    scanf("%d",&n);
    int m;
    printf("Enter the coloums of the marze: ");
    scanf("%d",&m);
    int totalways=marze(n,m);
    printf("%d",totalways);
    return 0;
}