#include<stdio.h>
int Binary_Search(int [],int,int,int);
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the input in the array:\n");
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("The Array is:\n");
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    //Binary search
    int item;
    printf("Enter the number which you found:\n");
    scanf("%d",&item);
    int pos = Binary_Search(arr,item,0,n-1);
    if(pos==-1){
        printf("The value %d is not present ",item);
    }
    else{
        printf("The value %d is present in position no: %d",item,pos);
    }
    return 0;
    
}
int Binary_Search(int arr[],int item,int lower,int higher)
{
    int middle;
    while(lower<=higher){
        middle = (lower+higher)/2;
        if(item==arr[middle]){
            return middle;
        } 
        else if(item>arr[middle]){
            lower= middle+1;
        }
        else{
            higher=middle-1;;

        }
    }
    return -1;
}