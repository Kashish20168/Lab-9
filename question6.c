#include <stdio.h>

#define SIZE 3

void inputMatrix(int mat[SIZE][SIZE]);
void multiplyMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]);
void displayMatrix(int mat[SIZE][SIZE]);

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE], C[SIZE][SIZE];

    printf("Enter elements of first matrix (A):\n");
    inputMatrix(A);

    printf("\nEnter elements of second matrix (B):\n");
    inputMatrix(B);

    multiplyMatrix(A, B, C);

    printf("\nMatrix A:\n");
    displayMatrix(A);

    printf("\nMatrix B:\n");
    displayMatrix(B);

    printf("\nResultant Matrix (A x B):\n");
    displayMatrix(C);

    return 0;
}

void inputMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("Enter element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }
}

void multiplyMatrix(int a[SIZE][SIZE], int b[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void displayMatrix(int mat[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%5d", mat[i][j]);
        }
        printf("\n");
    }
}
