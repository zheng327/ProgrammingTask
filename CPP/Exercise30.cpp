// ��Ŀ30����дһ�����򣬽����û������һ��������n��Ȼ�����n��ƽ������

#include <iostream>
#include <cmath>

double squareRoot(int n) {
    return std::sqrt(n);
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "��ƽ�����ǣ�" << squareRoot(n) << std::endl;
    return 0;
}
