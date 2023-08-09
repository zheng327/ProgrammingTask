/* 题目11：编写一个程序，接受一个整数输入，判断该整数是否是回文数。
回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
例如，121和12321都是回文数。*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (original == reversed) {
        printf("%d 是回文数。\n", original);
    } else {
        printf("%d 不是回文数。\n", original);
    }
    
    return 0;
}
