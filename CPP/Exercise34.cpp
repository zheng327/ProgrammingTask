// ��Ŀ34����дһ�����򣬽����û������һ��������n��Ȼ�����n�ĸ�λ����֮�͡�

#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�ĸ�λ����֮���ǣ�" << sumOfDigits(n) << std::endl;
    return 0;
}
