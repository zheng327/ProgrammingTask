// ��Ŀ29����дһ�����򣬽����û������һ��������n��Ȼ�����n��ʮ���Ʊ�ʾ����������

#include <iostream>

int reverseDecimal(int n) {
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
    std::cout << n << "��ʮ���Ʊ�ʾ���������ǣ�" << reverseDecimal(n) << std::endl;
    return 0;
}
