// ��Ŀ35����дһ�����򣬽����û������һ��������n��Ȼ�����n�����������ԡ�
// ��������ָ��Ϊ2����������������(3, 5)��(5, 7)��(11, 13)�ȡ�

#include <iostream>
#include <vector>

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void printPrimePairs(int n) {
    std::vector<std::pair<int, int>> pairs;
    for (int i = 2; i <= n - 2; ++i) {
        if (isPrime(i) && isPrime(i + 2)) {
            pairs.emplace_back(i, i + 2);
        }
    }
    std::cout << n << "���ڵ��������У�" << std::endl;
    for (const auto& pair : pairs) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printPrimePairs(n);
    return 0;
}
