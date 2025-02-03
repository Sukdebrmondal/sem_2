// taking input from user
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    for(int i=n-1;i>=0;i--){
        // printf("\n");
        printf("%d",arr[i]);
    }
    return 0;
}