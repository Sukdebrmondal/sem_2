#include<stdio.h>
int main(){
    int n,min,index,temp;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements to sort:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<n-1;i++){
        min = arr[i];
        index = i;
        for(int j = i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
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
25 88 42 71 10 53 97 36 69 14
sorted array is
10 14 25 36 42 53 69 71 88 97
*/