#include <stdio.h>
#include <stdlib.h>
struct Node {
    int info;
    struct Node* next;
};
struct Node* start = NULL;
void traverse();
void insertBegin();
void insertEnd();
void insertAnyposition();
int main() {
    int choice;
    while (1) {
        printf("\n\n1.Insert at Beginning\n2.Traverse\n3.Insert at End\n4.Insert any Position\n5.Exit\n");
        printf("\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            insertBegin();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insertEnd();
            break;
        case 4:
            insertAnyposition();
            break;
        case 5:
            exit(0);
        default:
            printf("\nWrong choice\n");
        }
    }
}
void traverse() {
    struct Node* temp;
    if (start == NULL) {
        printf("\nList is Empty");
    } else {
        temp = start;
        printf("\nValue of linked list are:\n");
        while (temp != NULL) {
            printf("%d\t", temp->info);
            temp = temp->next;
        }
    }
}
// Insert element at Beginning
void insertBegin() {
    struct Node* newnode;
    int item;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("\nMemory is not allocated");
    } else {
        printf("\nEnter the value to insert: ");
        scanf("%d", &item);
        newnode->info = item;
        newnode->next = start;
        start = newnode;
    }
}
// Insert element at the End
void insertEnd() {
    struct Node* newnode, * temp;
    int item;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("\nMemory is not allocated");
    } else {
        printf("\nEnter the value to insert: ");
        scanf("%d", &item);
        newnode->info = item;
        newnode->next = NULL;
        if (start == NULL) {
            start = newnode;
        } else {
            temp = start;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newnode;
        }
    }
}
// Insert element at any position
void insertAnyposition() {
    struct Node* newnode, * temp, * ptr;
    int item, pos, count = 1;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    if (newnode == NULL) {
        printf("\nMemory is not allocated");
    } else {
        printf("Enter the value to insert: ");
        scanf("%d", &item);
        newnode->info = item;
        newnode->next = NULL;
        if (start == NULL) {
            start = newnode;
        } else {
            printf("\nEnter the position after which you want to insert: ");
            scanf("%d", &pos);
            temp = start;
            while (temp != NULL && count != pos) {
                count++;
                ptr = temp;
                temp = temp->next;
            }
            if (temp == NULL) {
                printf("\nNode is not present");
            } else {
                ptr->next = newnode;
                newnode->next = temp;
            }
        }
    }
}

/*
1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 2

List is Empty

1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 1

Enter the value to insert: 45


1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 1

Enter the value to insert: 87


1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 2

Value of linked list are:
87      45

1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 3

Enter the value to insert: 76


1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 2

Value of linked list are:
87      45      76

1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 4
Enter the value to insert: 599

Enter the position after which you want to insert: 3


1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 2

Value of linked list are:
87      45      599     76

1.Insert at Beginning
2.Traverse
3.Insert at End
4.Insert any Position
5.Exit

Enter the choice: 5

*/