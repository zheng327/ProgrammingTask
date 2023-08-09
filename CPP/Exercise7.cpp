// 题目7：编写一个程序，接受用户输入的一个正整数n，然后输出n行倒直角三角形。

#include <iostream>

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return 0;
}
