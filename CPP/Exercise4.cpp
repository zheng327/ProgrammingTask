// ��Ŀ4����дһ�����򣬽����û������һ������n��Ȼ���ж�n�Ƿ���������

#include <iostream>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    std::cout << "������һ��������";
    std::cin >> n;
    if (isPrime(n)) {
        std::cout << n << "��������" << std::endl;
    } else {
        std::cout << n << "����������" << std::endl;
    }
    return 0;
}
