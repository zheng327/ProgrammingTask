// 题目52：编写一个程序，计算一个字符串中出现频率最高的字符及其出现次数。
// 字符串中只包含小写字母，并且忽略空格和标点符号。

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    std::cout << "请输入一个字符串：";
    std::getline(std::cin, input);

    std::unordered_map<char, int> frequencyMap;

    for (char c : input) {
        if (std::isalpha(c)) {
            c = std::tolower(c);
            frequencyMap[c]++;
        }
    }

    char maxChar = '\0';
    int maxFreq = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFreq) {
            maxChar = pair.first;
            maxFreq = pair.second;
        }
    }

    std::cout << "出现频率最高的字符是：" << maxChar << std::endl;
    std::cout << "出现次数为：" << maxFreq << std::endl;

    return 0;
}
