#include<stdio.h>
void pre_in_post (int n){
    if (n==0) return;
    printf("pre:%d\n",n);
    pre_in_post(n-1);
    printf("in:%d\n",n);
    pre_in_post(n-1);
    printf("post:%d\n",n);
    return ;

}
int main(){
    int n ;
    printf("enter the number: ");
    scanf("%d",&n);
    pre_in_post(n);
    return 0;
}