// ��Ŀ23����дһ�����򣬽����û������һ��������n��Ȼ����㲢���n�Ķ����Ʊ�ʾ��1�ĸ�����

#include <iostream>

int countOnesInBinary(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�Ķ����Ʊ�ʾ��1�ĸ����ǣ�" << countOnesInBinary(n) << std::endl;
    return 0;
}
