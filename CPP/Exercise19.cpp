// ��Ŀ19����дһ�����򣬽����û������һ��������n��Ȼ�����n�е��������Ρ�

#include <iostream>

void printIsoscelesTriangle(int n) {
    for (int i = 1; i <= n; ++i) {
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
    printIsoscelesTriangle(n);
    return 0;
}
