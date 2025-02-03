//Write a program to sort elements of an array in ascending and descending order.

#include<stdio.h>
void swap(int *a,int *b); // to swap to numbers
void printarr(int arr[],int a); // to print array elemnts
int length(int arr[],int size);
int main()
{
    int a,count,c;

    //taking elements using user choise
    printf("number of elements in the array: ");
    scanf("%d",&a);
    int arr[a];
    for(int i = 0;i<a;i++)
    {
        printf("arr[%d] :",i+1);
        scanf("%d",&arr[i]);
    }


    // //using an array and using sizeof operator
    // int arr[] = {23,52,62,34,27,34};
    // a = length(arr,sizeof(arr)/sizeof(arr[0]));


    printf("\n");
    
    printf("enter 1 for ascending, or 2 for descending:  ");
    scanf("%d",&c);

    if (c == 1)
    {
        do{
            count = 0;
            for(int i = 0;i<a-1;i++)
            {
                if(arr[i]>arr[i+1])
                {
                    swap(&arr[i],&arr[i+1]);
                    count++;
                }
            }
        }while(count != 0);

        printarr(arr,a);
    }

    else if(c == 2)
    {
        do{
            count = 0;
            for(int i = 0;i<a-1;i++)
            {
                if(arr[i]<arr[i+1])
                {
                    swap(&arr[i],&arr[i+1]);
                    count++;
                }
            }
        }while(count != 0);

        printarr(arr,a);   
    }

    else
    {
        printf("wrong input!!");
    }
}

void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void printarr(int arr[],int a)
{
    printf("{");
    for(int i = 0;i<a;i++)
    {
        printf("%d,",arr[i]);
    }
    printf("}");
}
int length(int arr[],int size)
{
    return size;
}
