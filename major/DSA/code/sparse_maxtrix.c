#include<stdio.h>
int main(){
    int r;
    printf("Enter the size of the rows: ");
    scanf("%d",&r);
    int c;
    printf("Enter the size of the columns: ");
    scanf("%d",&c);
    int sparse_maxtrix[r][c];
    printf("Entre the input of the Sparse Maxtrix:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&sparse_maxtrix[i][j]);
        }
    }
    printf("The Sparse Maxtrix is :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",sparse_maxtrix[i][j]);
        }
        printf("\n");
    }
    //count the total non zero value
    int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(sparse_maxtrix[i][j]!=0){
                count++;
            }
        }
    }

    //convert to Triplet Maxtrix
    int Triplet_maxtrix[50][3];int temp=1;
    Triplet_maxtrix[0][0]=r; //r->Row
    Triplet_maxtrix[0][1]=c; //c->column
    Triplet_maxtrix[0][2]=count; //non zero number
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(sparse_maxtrix[i][j]!=0){
                Triplet_maxtrix[temp][0]=i;
                Triplet_maxtrix[temp][1]=j;
                Triplet_maxtrix[temp][2]=sparse_maxtrix[i][j];
                temp++;
            }
        }
    }
    //Display the Triplet Maxtrix
    printf("The Triplet Maxtrix is:\n");
    printf("Row\tColumn\tNon-Zero\n");
    for(int i=0;i<count+1;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",Triplet_maxtrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}