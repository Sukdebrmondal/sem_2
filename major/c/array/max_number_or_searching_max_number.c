#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    // array address

    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // array create
    printf("The array is: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }


   // int max=arr[0];
   int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }    
    }
    printf("\nThe max number is :%d",max);
    
    return 0;
}