/*Given an integer array arr, move all 0's to thr end 
of it while maiintaining the relative order of the 
non-zero elements*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the Size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elements in the Array:\n ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nThe Array is:\n ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int brr[n];
    int idx =0;
    printf("The Ans is: \n");
    for(int i=0;i<n;i++){
        if (arr[i]!=0){
            brr[idx]=arr[i];
            idx++;
        }
    }
    while(arr[idx]!=n){
        brr[idx]=0;
        idx++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",brr[i]);
    }
    return 0;
}



//using bubble sort
/*
#include<stdio.h>
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
    printf("\nthe bubble Sort is:\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/