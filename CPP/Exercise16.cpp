// ��Ŀ16����дһ�����򣬽����û������һ��������n��Ȼ�����n��������ǡ�

#include <iostream>

void printPascalTriangle(int n) {
    int coef = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            std::cout << coef << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printPascalTriangle(n);
    return 0;
}
