#include<stdio.h>
int interpolation(int arr[],int size,int val);
int main(){
    int a,elem,n;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements: \n");
    for(int i = 0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the element to search: \n");
    scanf("%d",&elem);
    a = interpolation(arr,sizeof(arr)/sizeof(arr[0]),elem);
    if(a != -1){
        printf("%d is found at position %d",elem,a+1);
    }
}

int interpolation(int arr[],int size, int val){
    int low,mid,high;
    low = 0;
    high = size-1;
    int isfound = 0;
    while(val >= arr[low] && val <= arr[high] && low<=high ){
        mid = low+((val-arr[low])*(high-low))/(arr[high]-arr[low]);
        if(arr[mid] == val){
            isfound = 1;
            return mid;
        }
        else if(arr[mid] > val){
            high = mid-1;
        }
        else if(arr[mid] < val){
            low = mid+1;
        }
    }
    if(!isfound){
        printf("the element is not found");
        return -1;
    }
}