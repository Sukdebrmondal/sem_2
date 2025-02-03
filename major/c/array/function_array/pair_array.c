/*
//only two pair
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
        //printf("%d ",arr[i]);
        printf("%d ",arr[i]);
    }
    int pair=0;
    int x;
    printf("\nenter the value: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                pair++;
                printf("(%d,%d)\n",arr[i],arr[j]);
            }
        }
    }
    printf("%d",pair);
    return 0;
}
*/


//only triple pair
#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
        //printf("%d ",arr[i]);
        printf("%d ",arr[i]);
    }
    int triple_pair=0;
    int x;
    printf("\nenter the value: ");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==x){
                    triple_pair++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
                   
                

             
              
            }
        }
    }
    printf("%d",triple_pair);
    return 0;
}


