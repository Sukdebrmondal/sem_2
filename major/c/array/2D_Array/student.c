/*
#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of the row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of the coloum: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    

    printf("The 2d array is:\n");
    printf("S  R  M\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/


#include<stdio.h>
int main(){
    int s;
    printf("Enter the number of the student of the row: ");
    scanf("%d",&s);
    int r;
    int marks;
    printf("Enter the Roll and marks of the coloum: ");
    scanf("%d%d,",&r,&marks);
    int arr[s][r][marks];
    for(int i=0;i<s;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<marks;k++){
                scanf("%d",&arr[i][j][k]);
            }
          
        }
    }
    

    printf("The 2d array is:\n");
    printf("S  R  M\n");
    for(int i=0;i<s;i++){
        for(int j=0;j<r;j++){
            for(int k=0;k<marks;k++){
                printf("%d  ",arr[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}
