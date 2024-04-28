#include<stdio.h>
#include<stdbool.h>

int main() {
    int n, ele;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements in the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: \n");
    scanf("%d", &ele);

    bool isfound = false;

    int srt, mid, end;
    srt = 0;
    end = n - 1;
    while (srt <= end) {
        mid = (srt + end) / 2;
        if (arr[mid] == ele) {
            isfound = true;
            printf("The element is found at position %d\n", mid+1);
            break;
        } else if (arr[mid] < ele) {
            srt = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    if (!isfound) {
        printf("The element is not found in the array\n");
    }

    return 0;
}
/*
Enter the number of elements:
10
Enter the elements in the array:
10 14 25 36 42 53 69 71 88 97
Enter the element to search:
25
The element is found at position 3
*/

/*
Enter the number of elements:
10
Enter the elements in the array:
10 14 25 36 42 53 69 71 88 97
Enter the element to search:
99
The element is not found in the array
*/