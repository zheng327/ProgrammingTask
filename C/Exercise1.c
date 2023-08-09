/*
题目：反转字符串
描述：编写一个函数，接受一个字符串作为输入，并将其反转后输出。
*/

#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int len = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    reverseString(str);
    printf("%s\n", str);
    return 0;
}
