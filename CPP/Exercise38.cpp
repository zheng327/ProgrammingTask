// ��Ŀ38����дһ�����򣬽����û������һ��������n��Ȼ�����n�Ķ����Ʊ�ʾ������1����������

#include <iostream>

int countMaxConsecutiveOnes(int n) {
    int count = 0;
    int maxCount = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            maxCount = std::max(maxCount, count);
        } else {
            count = 0;
        }
        n /= 2;
    }
    return maxCount;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::cout << n << "�Ķ����Ʊ�ʾ������1���������ǣ�" << countMaxConsecutiveOnes(n) << std::endl;
    return 0;
}
