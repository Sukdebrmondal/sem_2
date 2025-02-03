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
        //printf("%d ",arr[i]);
        printf("%d ",i);

    }
    int sum_even=0;
    int sum_odd=0;
    for(int i=0;i<n;i++){
       if(i%2==0){
        sum_even+=arr[i];
       }
       else{
        sum_odd+=arr[i];
       }
    }
       int result=sum_even-sum_odd;
       printf("\n%d ",result);
    return 0;
}
