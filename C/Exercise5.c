/*
题目：矩阵乘法
描述：编写一个函数，实现两个矩阵的乘法运算。
*/
#include <stdio.h>

#define ROW1 2
#define COL1 3
#define ROW2 3
#define COL2 2

void multiplyMatrices(int mat1[][COL1], int mat2[][COL2], int res[][COL2]) {
    int i, j, k;
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            res[i][j] = 0;
            for (k = 0; k < COL1; k++) {
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void displayMatrix(int mat[][COL2]) {
    int i, j;
    for (i = 0; i < ROW1; i++) {
        for (j = 0; j < COL2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROW1][COL1] = { {1, 2, 3}, {4, 5, 6} };
    int mat2[ROW2][COL2] = { {7, 8}, {9, 10}, {11, 12} };
    int res[ROW1][COL2];

    multiplyMatrices(mat1, mat2, res);

    printf("Result:\n");
    displayMatrix(res);

    return 0;
}
