// ��Ŀ3����дһ�����򣬽����û������һ������n��Ȼ����㲢���n�Ľ׳ˡ�

#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1;
    std::cout << "������һ��������";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << n << "�Ľ׳��ǣ�" << factorial << std::endl;
    return 0;
}
