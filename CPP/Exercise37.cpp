// ��Ŀ37����дһ�����򣬽����û������һ��������n��Ȼ�����n�ĵ�����

#include <iostream>
#include <iomanip>

double reciprocal(int n) {
    return 1.0 / n;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�ĵ����ǣ�" << std::fixed << std::setprecision(6) << reciprocal(n) << std::endl;
    return 0;
}
