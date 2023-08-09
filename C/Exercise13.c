/* 题目13：编写一个程序，接受一个整数输入，计算并打印出该整数的阶乘。
阶乘是指小于或等于给定整数的所有正整数的乘积。
例如，对于输入的整数5，阶乘为1 * 2 * 3 * 4 * 5 = 120。*/
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }
    
    printf("%d 的阶乘为 %llu\n", num, factorial);
    
    return 0;
}
