// 题目21：编写一个程序，接受用户输入的一个字符串，然后判断该字符串是否是回文串。
// 回文串是指正向和反向拼写都一样的字符串。

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string str;
    std::cout << "请输入一个字符串：";
    std::cin >> str;
    if (isPalindrome(str)) {
        std::cout << str << "是回文串。" << std::endl;
    } else {
        std::cout << str << "不是回文串。" << std::endl;
    }
    return 0;
}
