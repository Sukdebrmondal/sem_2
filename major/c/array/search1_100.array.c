
#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];
    int sum1 =0;

    for (int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        sum1=sum1+arr[i];
    }
    printf("%d\n",sum1);
    int sum2=(n*(n+1))/2;
    int x= sum2-sum1;
    printf("%d\n",x);
    return 0;
}


    