/// data insertion(9/2/2024)


#include<stdio.h>
int main(){
	int arr[100],n,i,pos,elem;
	printf("enter the number of elements of the array: \n");
	scanf("%d",&n);
	
	printf("enter %d elements\n",n);
	
	for(i = 0;i<n;i++){
		scanf("%d",&arr[i]);
		}
	
	printf("enter the element to insert and position: \n");
	scanf("%d %d",&elem,&pos);
	
	for(i = n-1;i>=pos-1;i--){
		arr[i+1] = arr[i];
		}
	
	arr[pos-1] = elem;
	
	printf("new array is: ");
	for(i = 0;i<=n;i++){
		printf("%d ",arr[i]);
		}
	return 0;
}

/*
enter the number of elements of the array:
5
enter 5 elements
3 6 1 65 24
enter the element to insert and position:
24 3
new array is: 3 6 24 1 65 24

*/