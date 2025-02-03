#include<stdio.h>
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


   int min=arr[0];
   

    for(int i=0;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }    
    }
    printf("\nThe min number is :%d",min);
    
    return 0;
}