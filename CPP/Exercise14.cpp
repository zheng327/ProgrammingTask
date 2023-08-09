// 题目14：编写一个程序，接受用户输入的一个字符串，然后统计并输出字符串中的字母、数字和其他字符的个数。

#include <iostream>
#include <cctype>

void countCharacters(const std::string& str) {
    int letters = 0, digits = 0, others = 0;
    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            others++;
        }
    }
    std::cout << "字母个数：" << letters << std::endl;
    std::cout << "数字个数：" << digits << std::endl;
    std::cout << "其他字符个数：" << others << std::endl;
}

int main() {
    std::string str;
    std::cout << "请输入一个字符串：";
    std::cin >> str;
    countCharacters(str);
    return 0;
}
