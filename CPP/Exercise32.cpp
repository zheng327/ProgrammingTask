// 题目32：编写一个程序，接受用户输入的一个正整数n，然后判断n是否是质数。

#include <iostream>

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

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    if (isPrime(n)) {
        std::cout << n << "是质数。" << std::endl;
    } else {
        std::cout << n << "不是质数。" << std::endl;
    }
    return 0;
}
