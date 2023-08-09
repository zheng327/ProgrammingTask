/* 题目28：编写一个程序，接受一个整数输入，判断该整数是否是完数。
完数是指所有真因子（除了自身以外的因子）的和等于该数本身的整数。
例如，6是完数，因为6的真因子有1、2，且1 + 2 = 3。*/
#include <stdio.h>

int isPerfectNumber(int num) {
    int i, sum = 0;
    
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum == num);
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPerfectNumber(num)) {
        printf("%d 是完数。\n", num);
    } else {
        printf("%d 不是完数。\n", num);
    }
    
    return 0;
}
