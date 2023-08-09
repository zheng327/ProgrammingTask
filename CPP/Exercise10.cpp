// 题目10：编写一个程序，接受用户输入的一个正整数n，然后输出一个n行的菱形图案。

#include <iostream>

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    for (int i = n - 1; i >= 1; --i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
