// 题目9：编写一个程序，接受用户输入的一个正整数n，然后输出一个n阶乘法表。

#include <iostream>

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << j << "x" << i << "=" << i * j << "\t";
        }
        std::cout << std::endl;
    }
    return 0;
}
