//Write a program to count the frequency of each element in an array.

#include<stdio.h>
int len(int arr[],int size);
void check(int *i,int *j,int arr[],int *a,int *count);

int main()
{
    int count =1,a;

    printf("number of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++)
    {
        printf("arr[%d] :",i+1);
        scanf("%d",&arr[i]);
    }

    // int arr[]={67,98,67,67,34,34};
    // int a = len(arr,sizeof(arr)/sizeof(arr[0]));

    for (int i = 0;i<a;i++)
    {
        for(int j = 0 ;j<a;j++)
        {
            if(i!=j)
            {
                check(&i,&j,arr,&a,&count);
            }
        }
        printf("%d present there %d times\n",arr[i],count);
        count = 1;
    }
}

void check(int *i,int *j,int arr[],int *a,int *count)
{
    if(arr[*i] == arr[*j])
    {
        *count += 1;
        int k;
        for(k = *j;k<(*a-1);k++)
        {
            arr[k] = arr[k+1];
        }
        *a -= 1; 
        *j -= 1;
    }
}

int len(int arr[],int size)
{
    return size;
}