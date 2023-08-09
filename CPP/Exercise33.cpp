// 题目33：编写一个程序，接受用户输入的一个正整数n，然后计算并输出n的阶乘的末尾零的个数。

#include <iostream>

int countTrailingZeros(int n) {
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }
    return count;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的阶乘的末尾零的个数是：" << countTrailingZeros(n) << std::endl;
    return 0;
}
