// ��Ŀ15����дһ�����򣬽����û������һ��������n��Ȼ���ж�n�Ƿ��ǻ�������

#include <iostream>

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    if (isPalindrome(n)) {
        std::cout << n << "�ǻ�������" << std::endl;
    } else {
        std::cout << n << "���ǻ�������" << std::endl;
    }
    return 0;
}
