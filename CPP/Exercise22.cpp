// ��Ŀ22����дһ�����򣬽����û������һ��������n��Ȼ�����n��������������

#include <iostream>

void printPrimeFactors(int n) {
    std::cout << n << "�������������ǣ�";
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printPrimeFactors(n);
    return 0;
}
