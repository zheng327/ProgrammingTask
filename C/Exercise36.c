/* 题目36：编写一个程序，接受一个整数输入，判断该整数是否是斐波那契数。
斐波那契数是指前两个数为0和1，后续的每个数都是前两个数之和。
例如，0、1、1、2、3、5、8等都是斐波那契数。*/
#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, c;
    
    if (num == a || num == b) {
        return 1;
    }
    
    while (b <= num) {
        c = a + b;
        
        if (c == num) {
            return 1;
        }
        
        a = b;
        b = c;
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isFibonacci(num)) {
        printf("%d 是斐波那契数。\n", num);
    } else {
        printf("%d 不是斐波那契数。\n", num);
    }
    
    return 0;
}
