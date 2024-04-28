#include<stdio.h>
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[],int i,int n){
    int max = i;
    int l = i*2+1;
    int r = i*2+2;
    if(l<n && arr[l]>arr[max]){
        max = l;
    }
    if(r<n && arr[r]>arr[max]){
        max = r;
    }
    if(max!=i){
        swap(&arr[max],&arr[i]);
        heapify(arr,max,n);
    }
}
void heap_sort(int arr[],int n){
    for(int i = (n/2)-1;i>=0;i--){
        heapify(arr,i,n);
    }
    for(int i = n-1;i>=0;i--){
        swap(&arr[0],&arr[i]);
        heapify(arr,0,i);
    }
}

int main() {
    int len;
    printf("enter the number of elements: \n");
    scanf("%d",&len);
    int arr[len];
    printf("enter elements: \n");
    for(int i = 0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    heap_sort(arr,len);
    printf("Sorted array: \n");
    for(int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

/*
enter the number of elements: 
16
enter elements: 
46 75 94 28 55 67 44 61 19 43 59 69 79 26 23 14
Sorted array:
14 19 23 26 28 43 44 46 55 59 61 67 69 75 79 94
*/
