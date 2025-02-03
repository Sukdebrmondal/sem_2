#include<stdio.h>
int main(){ 

    int count = 0;

    int r;     //r=row
    printf("Enter the number of Row:\n ");
    scanf("%d",&r);

    int c ;     //c coloum
    printf("Enter the number of coloum:\n ");
    scanf("%d",&c);


    printf("Enter the sprse matricx:\n ");
 

    int arr1[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr1[i][j]);
            if(arr1[i][j]!=0){
                count++;
            }
        }
    }

    int r1=1 ; int c1= 0;
    int arr2[count+1][3];
    arr2[0][0]=r; arr2[0][1]= c;  arr2[0][2]=count;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr1[i][j]!=0){
                arr2[r1][c1]=i;
                arr2[r1][c1+1]= j; 
                arr2[r1][c1+2]=arr1[i][j];
                r1++;
            }
        }
        
    }

    printf("The Triplet is :\n ");
    for(int i=0;i<count+1;i++){
        for(int j=0;j<3;j++){
            printf("%d",arr1[i][j]);
        }
        printf("\n");

    }
    return 0 ;

}

/*
#include<stdio.h>
int main(){



int row,col,i,j,count = 0;
printf("enter the number of row: \n");
scanf("%d",&row);

printf("enter the number of column: \n");
scanf("%d",&col);

int arr1[row][col];

printf("enter the elements of sparse matrix: \n");
for(i = 0;i<row;i++){
	for(j = 0;j <col;j++){
		scanf("%d",&arr1[i][j]);
		if(arr1[i][j] != 0)
			count++;
		}
	}


int row1 = 1,col1 = 0;
int arr2[count+1][3];
arr2[0][0] = row; arr2[0][1] = col; arr2[0][2] = count;


for(i = 0;i<row;i++){
	for(j = 0;j<col;j++){
	if(arr1[i][j] != 0){
		arr2[row1][col1] = i;
		arr2[row1][col1+1] = j;
		arr2[row1][col1+2] = arr1[i][j];
		row1++;
		}
	}
}

printf("the triplet is: \n");
for(i = 0;i<count+1;i++){
	for(j = 0;j<3;j++){
		printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}
	
	
		
		
return 0;
}
		
*/	
		
		
