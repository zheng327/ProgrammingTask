// 题目42：编写一个程序，接受用户输入的一串字符串，并统计其中的单词数。
// 假设单词之间以空格分隔，不考虑标点符号。

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "请输入一串字符串：";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    std::cout << "单词数为：" << count << std::endl;

    return 0;
}
