// first type of decleration
/*
#include<stdio.h>
int main(){
    int arr[2][2];
    arr[0][0]=1;
    arr[0][1]=1;
    arr[1][0]=1;
    arr[1][1]=1;

    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int arr[2][2]= {{1,2},{3,4}};
    return 0;
}

*/
/*
#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of the row: ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of the coloum: ");
    scanf("%d",&c);
    int arr[r];
    for(int i=0;i<=r-1;i++){
        scanf("%d",&arr[i]);
    }
    int arr[c];
    for(int j=0;j<=c-1;j++){
        scanf("%d",&arr[j]);
    }

    printf("The 2d array is: ");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
*/

#include<stdio.h>
int main(){
    int arr[2][2]= {{1,2},{3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
