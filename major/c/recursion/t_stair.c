// stair path (single step,double step and triple step)
#include<stdio.h>
int stair(int n){
    if (n==1 || n==2 ) return n;
    if (n==3) return 4;
   // if (n==1) return 1;  //base case 1
  //  if (n==2) return 2;   // base casse 2
    int totalways = stair(n-1) + stair(n-2)+ stair(n-3);
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
