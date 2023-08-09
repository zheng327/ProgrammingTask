// 题目16：编写一个程序，接受用户输入的一个正整数n，然后输出n行杨辉三角。

#include <iostream>

void printPascalTriangle(int n) {
    int coef = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            std::cout << coef << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "请输入一个正整数：";
    std::cin >> n;
    printPascalTriangle(n);
    return 0;
}
