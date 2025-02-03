#include<stdio.h>
// void hm(int arr[]){

// }
int main(){
    int arr[] = {1,2,3,4};
    printf("%d",*arr);
    printf("%d",*(arr+0));
    printf("%d",*(arr+1));
    printf("%d",*(arr+2));
    printf("%d",*(arr+3));
    // hm(arr);
    // hm(&(arr[0]));
    // hm(arr+0);
    return 0;
}
