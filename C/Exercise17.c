/* 题目17：编写一个程序，接受一个整数输入，计算并打印出斐波那契数列中第N个数的值。
斐波那契数列是一个由 0 和 1 开始的整数序列，后续的每个数都是前两个数之和。
例如，对于输入的整数6，第6个斐波那契数为8。*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    printf("第%d个斐波那契数为%d\n", num, fibonacci(num));
    
    return 0;
}
