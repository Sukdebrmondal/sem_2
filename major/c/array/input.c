/*

#include<stdio.h>
int main(){
    int arr[5];
    printf("enter the first number: ");
    scanf("%d",&arr[0]);
    printf("enter the 2nd number: ");
    scanf("%d",&arr[1]);
    printf("enter the 3rd number: ");
    scanf("%d",&arr[2]);
    printf("enter the 4rd number: ");
    scanf("%d",&arr[3]);
    printf("%d",arr[3]);
    return 0;
}
*/
/*
#include<stdio.h>
int main(){
    int arr[5] = {2,6,4,9,6};
    for(int i=0;i<=4;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
*/
//user input
#include<stdio.h>
int main(){
    int arr[5];
    for(int i=0;i<=4; i++){
        scanf("%d ",&arr[i]);
    }
    printf("%d",arr[2]);
    return 0;
}