// ��Ŀ13����дһ�����򣬽����û������һ��������n��Ȼ����㲢���n��쳲���������ֵ��

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "��쳲���������ֵ�ǣ�" << fibonacci(n) << std::endl;
    return 0;
}
