#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements to sort:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        for(int j = 0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("sorted array is\n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

/*
enter the number of elements:
10
enter the elements to sort:
47 82 15 64 33 91 19 76 55 6
sorted array is
6 15 19 33 47 55 64 76 82 91
*/