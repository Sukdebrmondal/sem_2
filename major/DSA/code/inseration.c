#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter the element in the array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int ele;
    printf("Enter the element where you data insert:\n");
    scanf("%d",&ele);

    int indx;
    printf("Enter the indx where you data insert:\n");
    scanf("%d",&indx);
    if(indx<=n){
        for(int i=n;i>=indx;i--){
            arr[i]=arr[i-1];
        }
        arr[indx]=ele;
        printf("The arry is:\n");
        for(int i=0;i<n+1;i++){
            printf("%d ",arr[i]);
        }
    }
    else{
        printf("invalid");
    }
    return 0;  
}