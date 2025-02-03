#include<stdio.h>
int main(){
    struct persion{
        char name[50];
        int salary;
        int age;
    }man1,man2;
    printf("Enter the name of the first persion: ");
    scanf("%99[^\n]%*c", man1.name);
    printf("Enter the salary: ");
    scanf("%d",&man1.salary);
    printf("Enter the age: ");
    scanf("%d",&man1.age);

    struct persion_man2;
    printf("Enter the name of the second persion: ");
    scanf("\n%99[^\n]%*c",man2.name);
    printf("Enter the salary: ");
    scanf("%d",&man2.salary);
    printf("Enter the age: ");
    scanf("%d",&man2.age);
    //print

    printf("Enter the name of the first man :%s\n",man1.name);
    printf("The age of the second man is:%d",man2.age);


    return 0;
}