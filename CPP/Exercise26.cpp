// ��Ŀ26����дһ�����򣬽����û������һ��������n��Ȼ�����n�Ķ����Ʊ�ʾ��

#include <iostream>

void printBinary(int n) {
    if (n == 0) {
        std::cout << "0";
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; --j) {
        std::cout << binary[j];
    }
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�Ķ����Ʊ�ʾ�ǣ�";
    printBinary(n);
    std::cout << std::endl;
    return 0;
}
