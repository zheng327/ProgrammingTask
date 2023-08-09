// 题目44：编写一个程序，接受用户输入的一组整数，并判断其中是否存在重复的数字。

#include <iostream>
#include <unordered_set>

int main() {
    int num;
    std::unordered_set<int> numSet;

    while (true) {
        std::cout << "请输入一个整数（输入0结束）：";
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (numSet.count(num) > 0) {
            std::cout << "存在重复的数字" << std::endl;
            return 0;
        }

        numSet.insert(num);
    }

    std::cout << "不存在重复的数字" << std::endl;

    return 0;
}
