// 题目36：编写一个程序，接受用户输入的一个正整数n，然后输出n的斐波那契数列前n个数。

#include <iostream>
#include <vector>

std::vector<int> fibonacciSequence(int n) {
    std::vector<int> sequence;
    if (n >= 1) {
        sequence.push_back(0);
    }
    if (n >= 2) {
        sequence.push_back(1);
    }
    for (int i = 2; i < n; ++i) {
        int num = sequence[i - 1] + sequence[i - 2];
        sequence.push_back(num);
    }
    return sequence;
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    std::vector<int> sequence = fibonacciSequence(n);
    std::cout << n << "的斐波那契数列前" << n << "个数是：";
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
