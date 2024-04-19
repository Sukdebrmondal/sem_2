#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *lchild;
    struct node *rchild;
};
void inorder(struct node *);
void insert();

struct node *root = NULL;
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert\n2.Inorder traversal\n3.exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            if (root == NULL)
            {
                printf("\nTree is empty!\n");
            }
            else
            {
                printf("\nvalues of the tree in inorder traversal: \n");
                inorder(root);
            }
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("\nwrong input!\n");
            break;
        }
    }
}
void inorder(struct node *temp)
{
    if (temp != NULL)
    {
        inorder(temp->lchild);
        printf("%d ", temp->info);
        inorder(temp->rchild);
    }
}
void insert()
{
    struct node *temp, *ptr, *par;
    int item;
    temp = (struct node *)malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("\nmemory is not allocated\n");
    }
    else
    {
        printf("\nEnter the value to insert\n");
        scanf("%d", &item);
        temp->info = item;
        temp->lchild = NULL;
        temp->rchild = NULL;
        if (root == NULL)
        {
            root = temp;
        }
        else
        {
            ptr = root;
            par = NULL;
            while (ptr != NULL)
            {
                par = ptr;
                if (item < ptr->info)
                {
                    ptr = ptr->lchild;
                }
                else if (item > ptr->info)
                {
                    ptr = ptr->rchild;
                }
            }
            if (item < par->info)
            {
                par->lchild = temp;
            }
            else
            {
                par->rchild = temp;
            }
        }
    }
}
