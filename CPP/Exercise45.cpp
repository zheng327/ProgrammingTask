// 题目45：编写一个程序，接受用户输入的一个字符串，并反转字符串中的每个单词。

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::cout << "请输入一个字符串：";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    std::string reversedString;

    while (ss >> word) {
        std::reverse(word.begin(), word.end());
        reversedString += word + " ";
    }

    std::cout << "反转后的字符串：" << reversedString << std::endl;

    return 0;
}
