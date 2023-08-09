// 题目38：编写一个程序，接受用户输入的一个正整数n，然后输出n的二进制表示中连续1的最大个数。

#include <iostream>

int countMaxConsecutiveOnes(int n) {
    int count = 0;
    int maxCount = 0;
    while (n > 0) {
        if (n % 2 == 1) {
            count++;
            maxCount = std::max(maxCount, count);
        } else {
            count = 0;
        }
        n /= 2;
    }
    return maxCount;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::cout << n << "的二进制表示中连续1的最大个数是：" << countMaxConsecutiveOnes(n) << std::endl;
    return 0;
}
