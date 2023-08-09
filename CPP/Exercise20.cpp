// 题目20：编写一个程序，接受用户输入的一个正整数n，然后输出n行的正数和倒数的乘积表。

#include <iostream>
#include <iomanip>

void printProductTable(int n) {
    std::cout << std::fixed << std::setprecision(2);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(8) << i * (1.0 / j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printProductTable(n);
    return 0;
}
