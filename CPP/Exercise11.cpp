// ��Ŀ11����дһ�����򣬽����û������һ��������n��Ȼ���ж�n�Ƿ�����ȫ����
// ��ȫ����ָ����������֮�����������֮�͵��������������

#include <iostream>

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    if (isPerfectNumber(n)) {
        std::cout << n << "����ȫ����" << std::endl;
    } else {
        std::cout << n << "������ȫ����" << std::endl;
    }
    return 0;
}
