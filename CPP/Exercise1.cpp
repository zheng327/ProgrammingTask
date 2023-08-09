// 题目1：编写一个程序，接受用户输入的两个整数，然后计算并输出它们的和。

#include <iostream>

int main() {
    int num1, num2, sum;
    std::cout << "请输入两个整数：";
    std::cin >> num1 >> num2;
    sum = num1 + num2;
    std::cout << "它们的和是：" << sum << std::endl;
    return 0;
}
