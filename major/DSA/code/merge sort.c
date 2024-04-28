#include<stdio.h>
void merge(int arr[],int low,int mid,int high){
    int temp[high+1];
    int i,j,k;
    i = low;
    j = mid+1;
    k = 0;
    while((i<=mid)&&(j<=high)){
        if(arr[i]<arr[j]){
            temp[k] = arr[i];
            k++;i++;
        }
        else{
            temp[k] = arr[j];
            k++;j++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        k++;i++;
    }
    while(j<=high){
        temp[k] = arr[j];
        k++;j++;
    }
    for(int i = low,j = 0;i<=high;i++,j++){
      arr[i] = temp[j];
    }
}
void div(int arr[],int low,int high){
    if(low<high){
        int mid = (low+high)/2;
        div(arr,low,mid);
        div(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}
int main(){
    int len;
    printf("enter the number of elements: \n");
    scanf("%d",&len);
    int arr[len];
    printf("enter elements: \n");
    for(int i = 0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    div(arr,0,len-1);
    printf("sorted array is: \n");
    for(int i = 0;i<len;i++){
        printf("%d ",arr[i]);
    }
} 


/*
enter the number of elements:
15
enter elements:
73 42 18 57 89 26 63 35 10 51 94 67 22 39 81
sorted array is:
10 18 22 26 35 39 42 51 57 63 67 73 81 89 94
*/