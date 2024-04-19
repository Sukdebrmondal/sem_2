#include<stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input in the array:\n");
    for (int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    int x;
    printf("\nenter the number which you search: ");
    scanf("%d",&x);
    bool found = false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            found=true;
            printf("The Element is present in the position no: %d",i+1);
            break;
        }
    }
    if(!found){
        printf("The Element is not present in the given array");
    }
    

    return 0;
}