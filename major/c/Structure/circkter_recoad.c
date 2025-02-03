#include<stdio.h>
#include<string.h>
int main(){
    typedef struct circkter{
        char first_name[50];
        char last_name[50];
        int age;
        int test_matches;
        float avg_run;
    }circkter;
    //3 circketer
    circkter arr[3];
    for(int i=0;i<3;i++){
        //printf("\nEnter the name of the circkter: ");
        scanf("%s",arr[i].first_name);
        scanf("%s",arr[i].last_name);

      //  printf("\nEnter the  of age the circkter: ");
        scanf("%d",&arr[i].age);
        //printf("\nEnter the test matches of the circkter: ");
        scanf("%d",&arr[i].test_matches);
       // printf("\nEnter the Averest run of the circkter: ");
        scanf("%f",&arr[i].avg_run);
    }

    for(int i=0;i<3;i++){
        printf("Name : %s %s\n",arr[i].first_name,arr[i].last_name);
        printf("Age : %d\n",arr[i].age);
        printf("No_Of_Test_Match : %d\n",arr[i].test_matches);
        printf("Average_Run : %f\n",arr[i].avg_run);
        printf("\n");
    }
    return 0;
}