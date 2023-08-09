// 题目12：编写一个程序，接受用户输入的一个正整数n，然后输出n的所有因子。

#include <iostream>

void printFactors(int n) {
    std::cout << n << "的所有因子是：";
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printFactors(n);
    return 0;
}
