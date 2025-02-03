#include<stdio.h>
void fun(int a[]){
    a[0]=35;
    return ;
}
int main(){
    // int n;
    // printf("Enter the number of the array: ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<=n-1;i++){
    //     scanf("%d",&arr[i]);
    // }
    //  for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);
    // }
    // return 0; 
    int arr[2] = {1,3};
    printf("%d\n",arr[0]);
    fun(arr);
    printf("%d",arr[0]);
    return 0;
}