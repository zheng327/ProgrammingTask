// ��Ŀ33����дһ�����򣬽����û������һ��������n��Ȼ����㲢���n�Ľ׳˵�ĩβ��ĸ�����

#include <iostream>

int countTrailingZeros(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�Ľ׳˵�ĩβ��ĸ����ǣ�" << countTrailingZeros(n) << std::endl;
    return 0;
}
