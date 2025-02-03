#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array :");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the number:\n");
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);   
    }
    int sum =0;
    for(int i=0;i<n;i++){
        sum = sum+arr[i]; 
    }
    printf("The given numbers sum is : ");
    printf("%d",sum);
    

    return 0;
}
