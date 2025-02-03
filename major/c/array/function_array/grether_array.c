#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    int a;
    printf("Enter the index: ");
    scanf("%d",&a);
    for(int i=0;i<n;i++){
        if(i>a){
            sum=sum+arr[i];
        }   
    } 
    printf("%d",sum);    
    return 0;
}
