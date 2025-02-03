#include<stdio.h>
int stair(int n){
    if (n==1 || n==2) return n;
   // if (n==1) return 1;  //base case 1
  //  if (n==2) return 2;   // base casse 2
    int totalways = stair(n-1) + stair(n-2);
    return totalways;
}
int main(){
     int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int ways = stair(n);
    printf("%d",ways);
    return 0;
}
