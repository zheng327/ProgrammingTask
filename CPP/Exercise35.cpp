// 题目35：编写一个程序，接受用户输入的一个正整数n，然后输出n的所有素数对。
// 素数对是指差为2的两个素数，例如(3, 5)、(5, 7)、(11, 13)等。

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
    std::cout << n << "以内的素数对有：" << std::endl;
    for (const auto& pair : pairs) {
        std::cout << "(" << pair.first << ", " << pair.second << ") ";
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printPrimePairs(n);
    return 0;
}
