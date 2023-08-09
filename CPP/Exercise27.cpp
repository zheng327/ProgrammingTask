// 题目27：编写一个程序，接受用户输入的一个正整数n，然后输出n的十六进制表示。

#include <iostream>
#include <iomanip>

void printHexadecimal(int n) {
    std::cout << std::hex << std::uppercase << n;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的十六进制表示是：";
    printHexadecimal(n);
    std::cout << std::endl;
    return 0;
}
