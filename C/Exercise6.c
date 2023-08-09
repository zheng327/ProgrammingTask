/*
题目6：素数判断
描述：编写一个函数，判断给定的整数是否为素数。
*/
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num = 23;
    if (isPrime(num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
