// ��Ŀ12����дһ�����򣬽����û������һ��������n��Ȼ�����n���������ӡ�

#include <iostream>

void printFactors(int n) {
    std::cout << n << "�����������ǣ�";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printFactors(n);
    return 0;
}
