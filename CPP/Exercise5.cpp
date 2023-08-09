// 题目5：编写一个程序，接受用户输入的一个字符串，然后将其反转并输出。

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "请输入一个字符串：";
    std::cin >> str;
    std::reverse(str.begin(), str.end());
    std::cout << "反转后的字符串是：" << str << std::endl;
    return 0;
}
