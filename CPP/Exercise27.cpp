// ��Ŀ27����дһ�����򣬽����û������һ��������n��Ȼ�����n��ʮ�����Ʊ�ʾ��

#include <iostream>
#include <iomanip>

void printHexadecimal(int n) {
    std::cout << std::hex << std::uppercase << n;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "��ʮ�����Ʊ�ʾ�ǣ�";
    printHexadecimal(n);
    std::cout << std::endl;
    return 0;
}
