// 题目25：编写一个程序，接受用户输入的一个正整数n，然后输出n的反序数。

#include <iostream>

int reverseNumber(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的反序数是：" << reverseNumber(n) << std::endl;
    return 0;
}
