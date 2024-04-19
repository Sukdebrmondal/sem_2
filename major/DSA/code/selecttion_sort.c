#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input of the  array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //selection sort
    for(i=0;i<n-1;i++)
    {
       int min=i;   //we assume minimum number is arr[i]
       for(j=i+1;j<n;j++)
       {
            if(arr[j]<arr[min])
            {
                min=j;
            }
          
        } 
        if(i!=min)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }      
    }
    
    printf("The selecton sort is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
