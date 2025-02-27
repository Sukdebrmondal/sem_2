
#include <stdio.h>

void addMatrices(int mat1[][3], int mat2[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mat1[i][j] += mat2[i][j];
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3},
                      {4, 5, 6},
                      {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7},
                      {6, 5, 4},
                      {3, 2, 1}};

    printf("Matrix 1:\n");
    displayMatrix(mat1, 3, 3);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2, 3, 3);

    addMatrices(mat1, mat2, 3, 3);

    printf("\nSum of the matrices:\n");
    displayMatrix(mat1, 3, 3);

    return 0;
}


