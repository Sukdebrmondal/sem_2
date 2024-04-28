#include<stdio.h>
#include<stdbool.h>
int  main(){
    int n,ele;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements in array:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("enter the element to search: \n");
    scanf("%d",&ele);

    bool isfound = false;

    for(int i = 0;i<n;i++){
        if(arr[i] == ele){
            isfound = true;
            printf("the element is found at position %d",i+1);
            break;
        }
    }
    if(!isfound){
        printf("the element is not found in the array\n");
    }

}


/*
enter the number of elements:
10
enter the elements in array:
25 88 42 71 10 53 97 36 69 14
enter the element to search:
53
the element is found at position 6
*/

/*
enter the number of elements:
10
enter the elements in array:
25 88 42 71 10 53 97 36 69 14
enter the element to search:
33
the element is not found in the array
*/