#include<stdio.h>
//#include<string.h>
#include<stdbool.h>
int main(){
    typedef struct date{
        int day;
        //char day[10];
        int month;
        int year;
    }date;
    date group1;
    printf("Detalis the group 1:\n ");
    printf("Enter the day: ");
    scanf("%d",&group1.day);
   // scanf("%99[^\n]%*c",group1.day);
    printf("Enter the month: ");
    scanf("%d",&group1.month);
    printf("Enter the year: ");
    scanf("%d",&group1.year);

    printf("The day is:%d\n",group1.day);
    printf("The month is:%d\n",group1.month);
    printf("The year is:%d\n",group1.year);



//     date group2;
//     printf("Detalis the group 2:\n ");
//     printf("Enter the day: ");
//     scanf("\n%d",&group2.day);
//    // scanf("\n%99[^\n]%*c",group2.day);
//     printf("Enter the month: ");
//     scanf("\n%d",&group2.month);
//     printf("Enter the year: ");
//     scanf("\n%d",&group2.year);

//     printf("The day is:%d\n",group2.day);
//     printf("The month is:%d\n",group2.month);
//     printf("The year is:%d\n",group2.year);


    
    date group3;
    group3=group1;
    printf("Detalis the group 3:\n ");
    printf("Enter the day: ");
    scanf("\n%d",&group3.day);
   // scanf("\n%99[^\n]%*c",group2.day);
    printf("Enter the month: ");
    scanf("\n%d",&group3.month);
    printf("Enter the year: ");
    scanf("\n%d",&group3.year);

    printf("The day is:%d\n",group3.day);
    printf("The month is:%d\n",group3.month);
    printf("The year is:%d\n",group3.year);




    // bool flag=true;
    // if(group1.day!=group2.day) flag=false;
    // if(group1.month!=group2.month) flag=false;
    // if(group1.year!=group2.year) flag=false;

    bool flag=true;
    if(group1.day!=group3.day) flag=false;
    if(group1.month!=group3.month) flag=false;
    if(group1.year!=group3.year) flag=false;

    

    if(flag==true){
        printf("The dates are same");
    }
    
    else {
        printf("The dates are different");
    }
    return 0;
}