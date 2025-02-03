//Write a menu-driven program to implement matrix-addition, subtraction and multiplication.


#include<stdio.h>
#include<stdlib.h>

void addiiton()
{
    int r1,c1;
    int r2,c2;
    int r3,c3;

    // 1st matrix
    printf("enter the dimension of the first matrix(a b): \n");
    scanf("%d %d",&r1,&c1);

    printf("enter the dimension of the second matrix(a b): \n");
    scanf("%d %d",&r2,&c2);
    // 1st matrix

    if(r1 != r2 || c1 != c2)
    {
        printf("in this dimension matrix addition is not possible!!!\n");
    }
    else
    {
        // 1st matrix

        int arr1[r1][c1];
        printf("enter the elements of the first array: \n");
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c1;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }

        // 2nd matrix

        int arr2[r2][c2];
        printf("enter the elements of the second array: \n");
        for(int i = 0;i<r2;i++)
        {
            for(int j = 0;j<c2;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }

        r3 = r1;c3 = c2;

        int arr3[r3][c3];

        for(int i = 0;i<r3;i++)
        {
            for(int j = 0;j<c3;j++)
            {
                arr3[i][j] = arr1[i][j]+arr2[i][j];
            }
        }

        printf("\nthe addition of two matrix is: \n");

        for(int i = 0;i<r3;i++)
        {
            for(int j = 0;j<c3;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
}

void subtraction()
{
    
    int r1,c1;
    int r2,c2;
    int r3,c3;

    // 1st matrix
    printf("enter the dimension of the first matrix(a b): \n");
    scanf("%d %d",&r1,&c1);

    printf("enter the dimension of the second matrix(a b): \n");
    scanf("%d %d",&r2,&c2);
    // 1st matrix

    if(r1 != r2 || c1 != c2)
    {
        printf("in this dimension matrix subtraction is not possible!!!\n");
    }
    else
    {
        // 1st matrix

        int arr1[r1][c1];
        printf("enter the elements of the first array: \n");
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c1;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }

        // 2nd matrix

        int arr2[r2][c2];
        printf("enter the elements of the second array: \n");
        for(int i = 0;i<r2;i++)
        {
            for(int j = 0;j<c2;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }

        r3 = r1;c3 = c2;

        int arr3[r3][c3];

        for(int i = 0;i<r3;i++)
        {
            for(int j = 0;j<c3;j++)
            {
                arr3[i][j] = arr1[i][j]-arr2[i][j];
            }
        }

        printf("\nthe subtraction of two matrix is: \n");

        for(int i = 0;i<r3;i++)
        {
            for(int j = 0;j<c3;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
}

void multiplication()
{
    int r3,c3;
    int r1,c1;
    int r2,c2;

    // 1st matrix
    printf("enter the dimension of the first matrix(a b): \n");
    scanf("%d %d",&r1,&c1);

    // 2nd matrix
    printf("enter the dimension of the second matrix(a b): \n");
    scanf("%d %d",&r2,&c2);

    if(r2 != c1)
    {
        printf("in this dimension matrix addition is not possible!!!\n");
    }
    else
    {
        //1st matrix

        int arr1[r1][c1];
        printf("enter the elements of the first array: \n");
        for(int i = 0;i<r1;i++)
        {
            for(int j = 0;j<c1;j++)
            {
                scanf("%d",&arr1[i][j]);
            }
        }

        //2nd matrix

        int arr2[r2][c2];
        printf("enter the elements of the second array: \n");
        for(int i = 0;i<r2;i++)
        {
            for(int j = 0;j<c2;j++)
            {
                scanf("%d",&arr2[i][j]);
            }
        }

        r3 = r1;c3 = c2;

        int arr3[r3][c3];

        for(int i = 0;i<r3;i++)//0 1
        {
            for(int j = 0;j<c3;j++) //0
            {   
                int sum = 0;
                for(int k = 0;k<c1;k++)// 0
                {
                    sum += arr1[i][k]*arr2[k][j];
                }
                arr3[i][j] = sum;
            }
        }

        printf("\nthe multiplication of two matrix is: \n");

        for(int i = 0;i<r3;i++)
        {
            for(int j = 0;j<c3;j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
        }
    }
}


int main()
{
    int choice;
    printf("\nMatrix Operations Menu:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Subtraction\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Exit\n\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

    if(choice!=4)
    {
        if(choice == 1)
        {
            addiiton();
        }
        else if (choice == 2)
        {
            subtraction();
        }
        else if(choice == 3)
        {
            multiplication();
        }
    }
    else
        exit(1);
}
