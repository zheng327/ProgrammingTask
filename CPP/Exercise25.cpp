// ��Ŀ25����дһ�����򣬽����û������һ��������n��Ȼ�����n�ķ�������

#include <iostream>

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�ķ������ǣ�" << reverseNumber(n) << std::endl;
    return 0;
}
