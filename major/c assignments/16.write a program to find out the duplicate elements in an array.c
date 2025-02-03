//Write a program to find out the duplicate elements in an array.

#include<stdio.h>
void check(int *i,int *j,int arr[],int *a,int *count);

int main()
{
    int count =1,a;
    printf("enter the number of elements in the array: ");
    scanf("%d",&a);
    int arr[a];

    for(int i = 0;i<a;i++)
	{
		printf("arr[%d] = ",i+1);
		scanf("%d",&arr[i]);
	}

    for (int i = 0;i<a;i++)
    {
        for(int j = 0 ;j<a;j++)
        {
            if(i!=j)
            {
                check(&i,&j,arr,&a,&count);
            }
        }
        if(count != 1)
        {
        printf("duplicate element is %d \n",arr[i]);
        }
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
