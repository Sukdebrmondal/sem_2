#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of row and column: ");
    scanf("%d",&r);

    int arr[r][r];

    for (int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }

   // print 2D array
    printf("The 2D array is:\n");
    for (int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int brr[r][r];
    for (int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    
    }

    printf("The Transpose matrix is :\n");
    for (int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}