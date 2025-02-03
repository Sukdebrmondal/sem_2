#include<stdio.h>
int main(){
    int r; int ii,jj;
    printf("Enter the row:");
    scanf("%d",&r);
    int c;
    printf("Enter the coloum: ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The 2D array is: \n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int max =arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                ii=i;
                jj=j;
            }
        }
        
    }
    printf("\nthe max is:%d",max);
    printf("\nthe max number index is:%d,%d",ii,jj);

   
    return 0;
}

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
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/