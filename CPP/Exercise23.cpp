// 题目23：编写一个程序，接受用户输入的一个正整数n，然后计算并输出n的二进制表示中1的个数。

#include <iostream>

int countOnesInBinary(int n) {
    int count = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
        }
        n /= 2;
    }
    return count;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的二进制表示中1的个数是：" << countOnesInBinary(n) << std::endl;
    return 0;
}
