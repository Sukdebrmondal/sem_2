#include<stdio.h>
int main(){
    int r,ii,jj;
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

    int min =arr[0][0];

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(min>arr[i][j]){
                min=arr[i][j];
                ii = i;
                jj = j;
            }
        }
        
    }
    printf("\nthe min is:%d",min);
    printf("index is %d,%d",ii,jj);
    

    printf("\n");

    


    
   
    return 0;
}


