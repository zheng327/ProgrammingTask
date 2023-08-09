// 题目24：编写一个程序，接受用户输入的一个正整数n，然后判断n是否是闰年。

#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    std::cout << "请输入一个年份：";
    std::cin >> year;
    if (isLeapYear(year)) {
        std::cout << year << "是闰年。" << std::endl;
    } else {
        std::cout << year << "不是闰年。" << std::endl;
    }
    return 0;
}
