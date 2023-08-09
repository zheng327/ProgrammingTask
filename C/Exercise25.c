/* 题目25：编写一个程序，接受一个整数输入，计算并打印出所有小于该整数的素数。
素数是指除了1和自身外没有其他因子的整数。
例如，对于输入的整数10，小于10的素数为2、3、5、7。*/
#include <stdio.h>

void printPrimes(int num) {
    int i, j;
    
    printf("小于%d的素数：", num);
    
    for (i = 2; i < num; ++i) {
        int isPrime = 1;
        
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    printPrimes(num);
    
    return 0;
}
