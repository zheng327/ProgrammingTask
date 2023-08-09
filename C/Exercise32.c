/* 题目32：编写一个程序，接受一个整数输入，判断该整数是否是回文素数。
回文素数是指既是回文数又是素数的整数。
例如，131是回文素数，因为它是回文数且是素数。*/
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

int isPalindrome(int num) {
    int reversed = 0, remainder, original;
    
    original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int isPalindromePrime(int num) {
    return (isPalindrome(num) && isPrime(num));
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    if (isPalindromePrime(num)) {
        printf("%d 是回文素数。\n", num);
    } else {
        printf("%d 不是回文素数。\n", num);
    }
    
    return 0;
}
