// ��Ŀ2����дһ�����򣬽����û������һ������n��Ȼ����㲢���1��n�����������ĺ͡�

#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "������һ��������";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    std::cout << "1��" << n << "�ĺ��ǣ�" << sum << std::endl;
    return 0;
}
