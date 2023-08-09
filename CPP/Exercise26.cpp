// 题目26：编写一个程序，接受用户输入的一个正整数n，然后输出n的二进制表示。

#include <iostream>

void printBinary(int n) {
    if (n == 0) {
        std::cout << "0";
        return;
    }
    int binary[32];
    int i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }
    for (int j = i - 1; j >= 0; --j) {
        std::cout << binary[j];
    }
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的二进制表示是：";
    printBinary(n);
    std::cout << std::endl;
    return 0;
}
