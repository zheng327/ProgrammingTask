// 题目43：编写一个程序，生成一个指定长度的斐波那契数列。
// 斐波那契数列的前两个数字是0和1，后续的数字是前两个数字之和。

#include <iostream>

int main() {
    int length;
    std::cout << "请输入斐波那契数列的长度：";
    std::cin >> length;

    int a = 0;
    int b = 1;

    std::cout << "斐波那契数列：";
    for (int i = 0; i < length; i++) {
        std::cout << a << " ";

        int temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
