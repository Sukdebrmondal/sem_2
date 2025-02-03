//write a program to check a string(case sensitive) is palindrome or not.

#include<stdio.h>
#include<string.h>

void reverse(char arr1[],char arr2[])
{
    int length = strlen(arr1);

    int i;
    for(i = 0;i != length;i++)
    {
        arr2[i] = arr1[length-i-1];
    }
    arr2[i] = arr1[length];
}

int is_palindrome(char string[],char rev_string[])
{
    int i;
    for(i=0;string[i]!='\0';i++)
    {
        if (string[i] != rev_string[i])
        {
            return 0;
            break;
        }
    }
    return 1;
}


int main()
{
    char string[100];
    char rev_string[100];
    int check;

    printf("enter the string: ");
    gets(string);
    int length = strlen(string);

    reverse(string,rev_string);
    check = is_palindrome(string,rev_string);
    	
    if (check == 1)
    {
        printf("%s is palimdrome",string);
    }
    else if(check == 0)
    {
        printf("%s is not palindrome",string);
    }
}