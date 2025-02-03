/*
Write a program to create a student database of N number of records. Each
record consists of followings:
Student_Name, Student_Roll, Total_Marks, Subject
(Ex: Amit Dey, 13, 345, Computer Science)
Arrange the records with respect to Student_Name, Student_Roll and
Total_Marks respectively. Create the database using “structure” as well as
“union” respectively.
*/



#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct student{
    char name[20];
    int roll;
    int total_marks;
    char subject[20];
}student;

int main()
{
    int a;
    printf("how many numbers of records do you want to save: \n");
    scanf("%d",&a);

    student data[a];

    if(a>0)
    {
        for(int i = 0;i<a;i++)
        {
            printf("record no %d\n",i+1);
            printf("student\'s name: ");
            scanf(" %[^\n]",data[i].name);
            printf("student\'s roll: ");
            scanf("%d",&data[i].roll);
            printf("total marks of the student: ");
            scanf("%d",&data[i].total_marks);
            printf("subject of the student: ");
            scanf(" %[^\n]",data[i].subject);
            printf("\n");
        }

        printf("\n");

        int choice;
        
        do
        {
            printf("how you want to arrange the database: \n1 -> name wise\n2 -> roll wise\n3 -> total marks wise\n4 -> exit:\n");
            scanf("%d",&choice);
            if(choice == 4)
            {
                exit(1);
            }
            else if(choice == 1)
            {
                for(int i = 0;i<a;i++)
                {
                    for(int j = i+1;j<a;j++)
                    {
                        if(strcmp(data[i].name,data[j].name) > 0)
                        {
                            student temp;
                            temp = data[i];
                            data[i] = data[j];
                            data[j] = temp;
                        }
                    }
                }
                printf("\n");
                printf("arranged by students name!\n");
            }
            else if(choice == 2)
            {
                for(int i = 0;i<a;i++)
                {
                    for(int j = i+1;j<a;j++)
                    {
                        if(data[i].roll > data[j].roll)
                        {
                            student temp;
                            temp = data[i];
                            data[i] = data[j];
                            data[j] = temp;
                        }
                    }
                }
                printf("\n");
                printf("arranged by students roll!\n");
            }
            else if(choice == 3)
            {
                for(int i = 0;i<a;i++)
                {
                    for(int j = i+1;j<a;j++)
                    {
                        if(data[i].total_marks < data[j].total_marks)
                        {
                            student temp;
                            temp = data[i];
                            data[i] = data[j];
                            data[j] = temp;
                        }
                    }
                }
                printf("\n");
                printf("arranged by students total marks!\n");
            }
        
            for(int i = 0;i<a;i++)
            {
                printf("student\'s name: %s\n",data[i].name);
                printf("student\'s roll: %d\n",data[i].roll);
                printf("total marks of the student: %d\n",data[i].total_marks);
                printf("subject of the student: %s\n",data[i].subject);
                printf("\n");
            }
        }while(choice != 4);
    }
}
