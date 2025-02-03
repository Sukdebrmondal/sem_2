#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the Size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements in the Array:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nthe bubble Sort is:");
    for(int i=0;i<n;i++){
        bool flag =true; // array is not sorted yet
        for(int j=0;j<n-1-i;j++){ //change->n-1->n-1-i
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = false;
            }
        }
        if(flag==true) break;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}