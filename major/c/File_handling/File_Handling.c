//open file
/*
#include<stdio.h>
int main()
{
    FILE*ptr=fopen("sukde.txt","r");
    char str[100];
    if(fgets(str,100,ptr)!=NULL){
        printf("%s",str);//output->i am a student
    }
   
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    FILE*ptr=fopen("sukde.txt","r");
    char str[100];
    while(fgets(str,100,ptr)!=NULL){
        printf("%s",str);//output->i am a student
    }
   
    return 0;
}
*/
/*New file create

#include<stdio.h>
int main()
{
    FILE*ptr=fopen("pw.txt","w");
   
    return 0;
}
*/

/* Writing a file
//fputs(<chatacter-array>,<file-pointer>)*/

#include<stdio.h>
int main()
{
    FILE*ptr=fopen("pw.txt","w");
    char str[]="pw is the best platfrom for codeing";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}