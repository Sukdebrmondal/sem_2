/*
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the integer: ");
    scanf("%d",&n);
    int *ptr=(int*) malloc(n*sizeof(int));
    int *p=ptr;
    //input
    for(int i=1;i<=n;i++){
        scanf("%d",&(*ptr));
        ptr++;
    }
    //output
    //int*t=p;
    for(int i=1;i<=n;i++){
        printf("%d ",(*p));
        p++;
    }
}
*/
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
#include<stdio.h>
int main()
{
    FILE*ptr=fopen("pw.txt","w");
    char str[]="pw is the best platfrom for codeing";
    fputs(str,ptr);
    fclose(ptr);
    return 0;
}