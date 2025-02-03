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
		
		
		
		
