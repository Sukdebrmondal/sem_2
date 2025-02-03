#include<stdio.h>
int main(){
    int r;
    printf("Enter the number of row : ");
    scanf("%d",&r);

    int c;
    printf("Enter the number of column : ");
    scanf("%d",&c);
    // 2d array declearation
    int arr[r][c];


    // taking inputs
    for(int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }

    //printing inputs

    // for(int i=0;i<r;i++){
    //     for (int j=0;j<c;j++){
    //         printf("%d ",arr[i][j]);
    //     }
    //     printf("\n");
    // }

    int brr[r];

    for(int i=0;i<r;i++){
        int count=0;
        for (int j=0;j<c;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        brr[i] = count;
    }
    
    int maxcount = brr[0];
    for(int i = 0;i<r;i++){
        if(maxcount<brr[i]){
            maxcount = brr[i];
        }
    }


    for(int i = 0;i<r;i++){
        if(maxcount==brr[i]){
            printf("there are %d ones in index number %d\n",brr[i],i+1);
        }
    }


    return 0;  

}