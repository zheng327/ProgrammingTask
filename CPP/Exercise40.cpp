// 题目40：编写一个程序，接受用户输入的一个字符串，然后将字符串中的所有小写字母转换为大写字母，并输出转换后的字符串。

#include <iostream>
#include <cctype>

void convertToLowercase(std::string& str) {
    for (char& c : str) {
        c = std::toupper(c);
    }
}

int main() {
    std::string str;
    std::cout << "请输入一个字符串：";
    std::cin >> str;
    convertToLowercase(str);
    std::cout << "转换后的字符串是：" << str << std::endl;
    return 0;
}
