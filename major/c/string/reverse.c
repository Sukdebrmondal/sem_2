#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    puts("Enter the String: ");
    scanf("%[^\n]s",str);
    // size the string
    puts("the size is: ");
    int size =0;
    int k=0;
    while (str[k]!='\0')
    {
        size++;
        k++;
    }
    printf("%d",size);
    //puts("The Reverse of the string is: ");
    int i,j;
    for(i=0,j=size-1;i<=j;i++,j--){
        char temp = str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts("\nnThe reverse string is : ");
    puts(str);
    
    return 0;
    


}