// 题目22：编写一个程序，接受用户输入的一个正整数n，然后输出n的所有质因数。

#include <iostream>

void printPrimeFactors(int n) {
    std::cout << n << "的所有质因数是：";
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            std::cout << i << " ";
            n /= i;
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printPrimeFactors(n);
    return 0;
}
