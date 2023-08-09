// 题目37：编写一个程序，接受用户输入的一个正整数n，然后输出n的倒数。

#include <iostream>
#include <iomanip>

double reciprocal(int n) {
    return 1.0 / n;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的倒数是：" << std::fixed << std::setprecision(6) << reciprocal(n) << std::endl;
    return 0;
}
