// 题目18：编写一个程序，接受用户输入的一个正整数n，然后输出n行倒直角三角形。

#include <iostream>

void printInvertedRightTriangle(int n) {
    for (int i = n; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printInvertedRightTriangle(n);
    return 0;
}
