/* 题目14：编写一个程序，接受一个字符串输入，判断该字符串是否是回文字符串。
回文字符串是指正序和倒序读都是一样的字符串。
例如，"level" 和 "radar" 都是回文字符串。*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;
    
    printf("请输入一个字符串：");
    scanf("%s", str);
    
    length = strlen(str);
    
    for (i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("%s 是回文字符串。\n", str);
    } else {
        printf("%s 不是回文字符串。\n", str);
    }
    
    return 0;
}
