#include<stdio.h>
#include<limits.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array: ");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The unsorted array is: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minindex=-1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min =arr[j];
                minindex=j;
            }
        }
        //swap min and first element unsorted part 
        //swap minidx and i
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp; 
    }
    printf("\n");
    printf("The sorted array is:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
    
}

//Time Complexity


