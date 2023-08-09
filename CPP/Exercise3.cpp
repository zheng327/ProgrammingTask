// 题目3：编写一个程序，接受用户输入的一个整数n，然后计算并输出n的阶乘。

#include <iostream>

int main() {
    int n;
    unsigned long long factorial = 1;
    std::cout << "请输入一个整数：";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    std::cout << n << "的阶乘是：" << factorial << std::endl;
    return 0;
}
