// 题目28：编写一个程序，接受用户输入的一个字符串，然后统计并输出字符串中的单词个数。

#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "请输入一个字符串：";
    std::getline(std::cin, str);
    std::cout << "单词个数：" << countWords(str) << std::endl;
    return 0;
}
