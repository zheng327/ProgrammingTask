// ��Ŀ17����дһ�����򣬽����û������һ��������n��Ȼ�����n�е�����ͼ����

#include <iostream>

void printDiamondPattern(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printDiamondPattern(n);
    return 0;
}
