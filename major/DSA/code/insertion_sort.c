//Asccending
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input of the Array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //insertion sort
    int j;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0 && temp<arr[j];j--){
            arr[j+1]=arr[j];
        }
        j++;
        
        arr[j]=temp;
    }
    printf("The Insertion sort is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


//Descending
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input of the Array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //insertion sort
    int j;
    for(int i=0;i<n;i++)
    {
        int temp=arr[i];
        for(j=i-1;j>=0 && temp>arr[j];j--){
            arr[j+1]=arr[j];
        }
        j++;
        
        arr[j]=temp;
    }
    printf("The Insertion sort is:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
