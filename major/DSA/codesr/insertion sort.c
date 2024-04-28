#include <stdio.h>

int main() {
    int n;
    printf("enter the number of elements: \n");
    scanf("%d",&n);
    int arr[n];

    printf("enter the elements to sort:\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("Sorted array: \n");
    for(int i = 0;i<n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

/*
enter the number of elements:
10
enter the elements to sort:
25 88 42 71 10 53 97 36 69 14
Sorted array:
10 14 25 36 42 53 69 71 88 97
*/