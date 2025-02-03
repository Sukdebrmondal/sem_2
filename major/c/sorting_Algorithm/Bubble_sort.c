//bubble Sort
//Method-1
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
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
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

//Method-2
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
    printf("\nthe bubble Sort is:");
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){ //change->n-1->n-1-i
            if(arr[j]>arr[j+1]){
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

/*If size of array is n then miximum swaps is->
->[(n-1)+(n-2)+(n-3)+....+3+2+1]=n*(n-1)/2 */
