#include<stdio.h>
int main(){
    int n,j;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements to sort:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i = 1;i<n;i++){
        int k = arr[i];
        for(j = i-1;j>=0 && arr[j]>k;j--){
            arr[j+1] = arr[j];
        }
        arr[j+1] = k;
    }
    printf("Sorted array: \n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}