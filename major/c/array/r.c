#include<stdio.h>
void print(int [],int);

int main(){
    int arr[100];
    int n,pos,ele;
    printf("enter the number of the elements: \n");
    scanf("%d",&n);
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    arr[n] = '\0';

    printf("enter the position: ");
    scanf("%d",&pos);
    if(pos>=0&&pos<=n){
        printf("enter the element: ");
        scanf("%d",&ele);
    }
    else{
        printf("out of range");
        return 0;
    }

    int temp1,temp2;
    for(;arr[pos]!='\0';pos++)
    {
    temp1 = arr[pos];
    arr[pos] = ele;
    temp2 = arr[pos+1];
    arr[pos+1] = temp1;
    }

    // a b c d
    // a b g c d;
    // t1 = c
    // t2 = d


    print(arr,n);

}

void print(int arr[],int size){
    for(int i = 0;i<size;i++){
        printf("%d ",arr[i]);
    }
}