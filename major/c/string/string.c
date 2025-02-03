/*
//use puts() function
#include<stdio.h>
#include<string.h>
int main(){
    char str[]=("college wallah is best codinf platform");
    //printf("%s",str);
    puts(str);// only for string
    puts("hello everyone");
    return 0;
}
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
   // scanf("%s",str); // if input the scanf then only the first word be considered
   // gets(str); // entire s3ntence can be input
    scanf("%[^\n]s",str); // entire s3ntence can be input

    printf("Your input was: %s",str);
    return 0;
}