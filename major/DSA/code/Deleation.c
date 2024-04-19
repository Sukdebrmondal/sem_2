#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element in the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    int indx;
    printf("Enter the indx where you data delete:\n");
    scanf("%d",&indx);
    for(int i=indx;i<n;i++){
        arr[i]=arr[i+1];
    }
    printf("The array is:\n");
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;  
}