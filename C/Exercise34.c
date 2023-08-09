/* 题目34：编写一个程序，接受一个整数输入，判断该整数是否是强整数。
强整数是指其所有的真因子的和大于该数本身的整数。
例如，12是强整数，因为12的真因子有1、2、3、4、6，且1 + 2 + 3 + 4 + 6 = 16 > 12。*/
#include <stdio.h>

int isStrongNumber(int num) {
    int i, sum = 0;
    
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum > num);
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isStrongNumber(num)) {
        printf("%d 是强整数。\n", num);
    } else {
        printf("%d 不是强整数。\n", num);
    }
    
    return 0;
}
