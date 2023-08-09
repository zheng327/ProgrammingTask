// 题目53：编写一个程序，将一个二维矩阵顺时针旋转90度。
// 假设矩阵是n x n的大小。

#include <iostream>
#include <vector>

void rotateMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    // 水平翻转矩阵
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            std::swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }

    // 主对角线翻转矩阵
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}

int main() {
    std::vector<std::vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateMatrix(matrix);

    std::cout << "旋转后的矩阵：" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
