// 题目15：编写一个程序，接受用户输入的一个正整数n，然后判断n是否是回文数。

#include <iostream>

bool isPalindrome(int n) {
    int reversed = 0;
    int original = n;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    if (isPalindrome(n)) {
        std::cout << n << "是回文数。" << std::endl;
    } else {
        std::cout << n << "不是回文数。" << std::endl;
    }
    return 0;
}
