/* 
In the case of insertation Time complexity
Work case = o(n^2)
Avg.case = o(n^2)
best Case = o(n)
*/

/*Coding implementation of insertion sort*/
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
    printf("\nthe insertion Sort is: ");
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;
            j--;
        }    
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}