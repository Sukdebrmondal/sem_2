#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of row : ");
    scanf("%d",&r);

    int c;
    printf("Enter the number of coloum : ");
    scanf("%d",&c);

    int arr[r][c];

    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



    int maxcount=0;
    for(int i=0;i<r;i++){

        int count=0;
        for (int j=0;j<c;j++){
            if(arr[i][j]==1){
                count++;
            }

            if(maxcount<count){
                maxcount=count;    
            }
          
        }
    }
    printf(" The max  1 is:%d",maxcount);

     
    return 0;  

}