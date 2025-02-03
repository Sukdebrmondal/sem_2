
#include<stdio.h>
int main(){
    //1st matric
    int m;
    printf("Enter thr size of Row: ");
    scanf("%d",&m);

    int n;
    printf("Enter thr size of column: ");
    scanf("%d",&n);

    printf("Enter the element in the 1st matric:\n");

    int arr1[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The 1st matrix is:\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
//2nd ,atricx
    int p;
    printf("Enter thr size of Row: ");
    scanf("%d",&p);

    int q;
    printf("Enter thr size of column: ");
    scanf("%d",&q);

    printf("Enter the element in the 2nd matric:\n");

    int arr2[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The 2nd matrix is:\n");

    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    int res[n][p];
    //multiplication
    int cr = 2;
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            // i row of arr1[][] and j column of arr2[][]
            //row-> arr1[i][0],arr1[i][1],arr1[i][2].......
            //column->
            res[i][j] = 0;
            for(int k=0;k<cr;cr++){
                res [i][j]+=arr1[i][k] *arr2[k][j];

            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<p;j++){
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}