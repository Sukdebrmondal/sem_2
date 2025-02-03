//write a program to print the transpose the matrix enter the user

#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of column: ");
    scanf("%d",&c);
    printf("Enter the Elements of the array:\n");
    int arr[r][c];

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //print 2D array
    printf("The 2D array is:\n");
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("The Transpose matrix is :\n");

    for (int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

// write a program to print the transpose the matrix enter the user and store in another matrix
/*
#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of column: ");
    scanf("%d",&c);

    int arr[r][c];

    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

   // print 2D array
    printf("The 2D array is:\n");
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
    int brr[c][r];
    for (int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            brr[i][j]=arr[j][i];
        }
    
    }

    printf("The Transpose matrix is :\n");
    for (int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",brr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/