// 题目2：编写一个程序，接受用户输入的一个整数n，然后计算并输出1到n的所有整数的和。

#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "请输入一个整数：";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    std::cout << "1到" << n << "的和是：" << sum << std::endl;
    return 0;
}
