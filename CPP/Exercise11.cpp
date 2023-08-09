// 题目11：编写一个程序，接受用户输入的一个正整数n，然后判断n是否是完全数。
// 完全数是指除了它本身之外的所有因子之和等于它本身的数。

#include <iostream>

bool isPerfectNumber(int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum == n;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    if (isPerfectNumber(n)) {
        std::cout << n << "是完全数。" << std::endl;
    } else {
        std::cout << n << "不是完全数。" << std::endl;
    }
    return 0;
}
