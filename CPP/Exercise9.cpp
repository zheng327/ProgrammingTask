// ��Ŀ9����дһ�����򣬽����û������һ��������n��Ȼ�����һ��n�׳˷���

#include <iostream>

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j << "x" << i << "=" << i * j << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
