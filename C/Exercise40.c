/* 题目40：编写一个程序，接受一个整数输入，判断该整数是否是完全平方数。
完全平方数是指可以写成某个整数的平方的整数。
例如，16是完全平方数，因为4 * 4 = 16。*/
#include <stdio.h>

int isPerfectSquare(int num) {
    int i;
    
    if (num < 0) {
        return 0;
    }
    
    for (i = 0; i * i <= num; ++i) {
        if (i * i == num) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPerfectSquare(num)) {
        printf("%d 是完全平方数。\n", num);
    } else {
        printf("%d 不是完全平方数。\n", num);
    }
    
    return 0;
}
