/*
题目4：大数相加
描述：编写一个函数，实现两个大数（超出整型范围）的相加。
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *addBigNumbers(const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = (len1 > len2) ? len1 : len2;

    int *result = (int *)malloc(sizeof(int) * (maxLen + 1));
    int carry = 0;
    int index = 0;

    for (int i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0; i--, j--) {
        int digit1 = (i >= 0) ? num1[i] - '0' : 0;
        int digit2 = (j >= 0) ? num2[j] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result[index++] = sum % 10;
        carry = sum / 10;
    }

    if (carry != 0) {
        result[index++] = carry;
    }

    char *sum = (char *)malloc(sizeof(char) * (index + 1));
    int sumIndex = 0;

    for (int i = index - 1; i >= 0; i--) {
        sum[sumIndex++] = result[i] + '0';
    }

    sum[sumIndex] = '\0';
    free(result);
    return sum;
}

int main() {
    const char *num1 = "12345678901234567890";
    const char *num2 = "98765432109876543210";
    char *sum = addBigNumbers(num1, num2);
    printf("Sum: %s\n", sum);
    free(sum);
    return 0;
}
