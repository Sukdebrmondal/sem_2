#include<stdio.h>
void fun(int a[]){      // call by referance  (a=arr[]) 
    int temp=a[0];      // both are same
    a[0]=a[1];
    a[1]=temp;
    return ;
}
int main(){
    int arr[2] = {1,3};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);
    printf("%d %d\n",arr[0],arr[1]);
    return 0;
}