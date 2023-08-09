// ��Ŀ53����дһ�����򣬽�һ����ά����˳ʱ����ת90�ȡ�
// ���������n x n�Ĵ�С��

#include <iostream>
#include <vector>

void rotateMatrix(std::vector<std::vector<int>>& matrix) {
    int n = matrix.size();

    // ˮƽ��ת����
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j < n; j++) {
            std::swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }

    // ���Խ��߷�ת����
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

    std::cout << "��ת��ľ���" << std::endl;
    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
