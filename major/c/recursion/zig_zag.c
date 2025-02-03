 #include<stdio.h>
 void zig_zag(int n){
    if(n==0) return;
    printf("%d ",n);
    zig_zag(n-1);
    printf("%d ",n);
    zig_zag(n-1);
    printf("%d ",n);
    return;
 }
 int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    zig_zag(n);
    return 0;
 }