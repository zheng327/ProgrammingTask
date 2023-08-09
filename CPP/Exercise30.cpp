// 题目30：编写一个程序，接受用户输入的一个正整数n，然后输出n的平方根。

#include <iostream>
#include <cmath>

double squareRoot(int n) {
    return std::sqrt(n);
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的平方根是：" << squareRoot(n) << std::endl;
    return 0;
}
