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
    int product=1;
    for(int i=0;i<n;i++){
        product = product*arr[i]; 
    }
    printf("The given numbers product is : ");
    printf("%d",product);
    

    return 0;
}
