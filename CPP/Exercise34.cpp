// 题目34：编写一个程序，接受用户输入的一个正整数n，然后输出n的各位数字之和。

#include <iostream>

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的各位数字之和是：" << sumOfDigits(n) << std::endl;
    return 0;
}
