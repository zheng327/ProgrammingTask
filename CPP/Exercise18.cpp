// ��Ŀ18����дһ�����򣬽����û������һ��������n��Ȼ�����n�е�ֱ�������Ρ�

#include <iostream>

void printInvertedRightTriangle(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printInvertedRightTriangle(n);
    return 0;
}
