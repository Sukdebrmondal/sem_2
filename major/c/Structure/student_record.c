

#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct student_record{
  char name[30];
  char dept[20];
  char course[20];
  int year_of_joining;

}student_record;

int main(){
    typedef struct student_record{
    char name[30];
    char dept[20];
    char course[20];
    int year_of_joining;
    }student_record;

    student_record s1;
    //input
    printf("student no 1 detalis:\n");
    printf("Enter the name of the first student: ");
    scanf("%99[^\n]%*c",s1.name);
    printf("Enter the Department: ");
    scanf("%99[^\n]%*c",s1.dept);
    printf("Enter the Course: ");
    scanf("%99[^\n]%*c",s1.course);
    printf("Enter the year of the joining: ");
    scanf("%d",&s1.year_of_joining);
        //output
    printf("Name of the first student:%s\n",s1.name);
    printf("Department of the first student:%s\n",s1.dept);
    printf("Course of the first student:%s\n",s1.course);
    printf("The joining year of the first student:%d\n",s1.year_of_joining);



    student_record s2;
        //input
    printf("student no 2 detalis:\n");
    printf("Enter the name of the second student: ");
    scanf("\n%99[^\n]%*c",s2.name);
    printf("\nEnter the Department: ");
    scanf("\n%99[^\n]%*c",s2.dept);
    printf("Enter the Course: ");
    scanf("\n%99[^\n]%*c",s2.course);
    printf("Enter the year of the joining:\n ");
    scanf("%d",&s2.year_of_joining);
        //output
    printf("Name of the first student:%s\n",s2.name);
    printf("Department of the first student:%s\n",s2.dept);
    printf("Course of the first student:%s\n",s2.course);
    printf("The joining year of the first student:%d",s2.year_of_joining);

    bool flag=true;
   // if(s1.name!=s2.name) flag=false;
    if(s1.dept!=s2.dept && s1.course!=s2.course && s1.year_of_joining!=s2.year_of_joining)
    flag=false;    
    if(flag==true){
        printf("\nTwo Detalis are same");
    }
    
    else {
        printf("\nThe Detalis are different");
    }
    return 0;
}



    



    