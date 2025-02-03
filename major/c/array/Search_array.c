#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);

    int arr[n];

    for (int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
    }

    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }

    int x;
    printf("\nenter the number which you search: ");
    scanf("%d",&x);
    int check = 0;

    /*
    for(int i=n-1; i>=0;i--){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d\n", x,i); 
            break; // last index print
        }
    }
    /*

/** for(int i=0; i<n;i++){
        if(arr[i]==x){
            printf("%d is present in the array and its index is %d\n", x,i); 
           // break;         // when we do not like break then print
                                 //   all index
        }
    }
*/
    for(int i=0; i<n;i++){
        if(arr[i]==x){     
            check=1;
            break;
        }
    }
        if(check==0){
            printf("this number is not presdent in array");
        }
        else{
            printf(" The number present r in array");
        }
    

    return 0;
}