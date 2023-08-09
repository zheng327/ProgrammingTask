/* 题目19：编写一个程序，接受一个整数输入，判断该整数是否是素数。
素数是指除了1和自身外没有其他因子的整数。
例如，7是素数，而4不是素数。*/
#include <stdio.h>

int isPrime(int num) {
    int i;
    
    if (num <= 1) {
        return 0;
    }
    
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d 是素数。\n", num);
    } else {
        printf("%d 不是素数。\n", num);
    }
    
    return 0;
}
