/* 题目12：编写一个程序，接受一个整数输入，计算并打印出该整数的所有因子。
因子是指能够整除给定整数且大于1的正整数。
例如，对于输入的整数12，因子为2、3、4、6。 */
#include <stdio.h>

int main() {
    int num, i;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    printf("因子：");
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
