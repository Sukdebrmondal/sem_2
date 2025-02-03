
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int marks[n];
    printf("Enter the marks of the students:\n ");
    for (int i=0;i<=n-1;i++){
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<n;i++){
       // printf("%d ",marks[i]); print the array
       // if(marks[i]<35){
      //  printf("%d ",marks[i]);//below the marks 35 print
        if(marks[i]<35){
        printf("%d ",i); // print the marks of the index where the marks below 35
      }
    }
    return 0;
    

}
    


// int a(25);0---->wrong---->correct-->int a[25];
//int size=10,b[size];-->correct
//proof-->
/*
#include<stdio.h>
int main(){\
int size=10, b[size];
printf("%d",size);
printf("\n");
b[0]=3;
printf("%d",b[0]);
return 0;
}
*/
//int c={0,1,2};-->wrong-->correct-->int c[3]={0,1,2};