#include<stdio.h>
#include<string.h>

int length(char *arr[],int len)
{
    return len;
}

void ascending(char **arr,int len)
{
    for(int i = 0;i<len;i++)
    {
        for(int j = (i+1);j<len;j++)
        {
            if (strcmp(arr[i],arr[j])>0)
            {
                char *k;
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
}

void descending(char **arr,int len)
{
    for(int i = 0;i<len;i++)
    {
        for(int j = (i+1);j<len;j++)
        {
            if (strcmp(arr[i],arr[j])<0)
            {
                char *k;
                k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
}

int main()
{

    char *arr[] = {"Aarav Sharma","Naina Patel","Arjun Singh","Aisha Kapoor","Raj Verma","Ananya Das","Vikram Mehta","Diya Choudhury","Ravi Kapoor","Priya Mishra"};
    int len = length(arr,sizeof(arr)/sizeof(arr[1]));

    int choice;

    printf("how do you want the list represents\n1-->ascending\n2-->descending\n");
    scanf("%d",&choice);
    if(choice == 1)
        ascending(arr,len);
    else if(choice == 2)
        descending(arr,len);
    else
        printf("wrong input");

    for(int i = 0;i<len;i++)
    {
        printf("%s \n",arr[i]);
    }
}