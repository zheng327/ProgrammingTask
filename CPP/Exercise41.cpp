// 题目41：编写一个程序，接受用户输入的一串整数，并计算其中的最大值和最小值。
// 输入以0结束，不计入最大值和最小值的计算。

#include <iostream>
#include <limits>

int main() {
    int num;
    int max = std::numeric_limits<int>::min(); // 设置最小值为int类型的最小值
    int min = std::numeric_limits<int>::max(); // 设置最大值为int类型的最大值

    while (true) {
        std::cout << "请输入一个整数（输入0结束）：";
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    std::cout << "最大值是：" << max << std::endl;
    std::cout << "最小值是：" << min << std::endl;

    return 0;
}
