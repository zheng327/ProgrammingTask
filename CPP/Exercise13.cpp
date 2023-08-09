// 题目13：编写一个程序，接受用户输入的一个正整数n，然后计算并输出n的斐波那契数列值。

#include <iostream>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    int a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的斐波那契数列值是：" << fibonacci(n) << std::endl;
    return 0;
}
