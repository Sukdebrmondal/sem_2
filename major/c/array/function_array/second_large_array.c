/*

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }


    
    printf("The array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max=arr[0];
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        max = arr[i];
       }
    }
    printf("\n");
    int smax=arr[0];
    for(int i=0;i<n;i++){
       if(arr[i]!=max && smax<arr[i]){
        smax = arr[i];
       }
    }
    printf(" The max number is: %d",max);
     printf("\nThe second max number is: %d",smax);

    return 0;
}
*/

// or

#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array: ");
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }


    
    printf("The array is : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int max=arr[0];
    int smax=arr[0];
    for(int i=0;i<n;i++){
       if(max<arr[i]){
        smax= max;
        max = arr[i];
       }
       else if (smax<arr[i] && max!=arr[i]){
        smax=arr[i];
       }
    }
    printf(" The max number is: %d",max);
    printf("\nThe second max number is: %d",smax);
    return 0;
}

