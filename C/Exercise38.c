/* 题目38：编写一个程序，接受一个字符串输入，计算并打印出字符串中的最长回文子串。
回文子串是指正序和倒序读都是一样的子串。
例如，对于输入的字符串"babad"，最长回文子串为"bab"。*/
#include <stdio.h>
#include <string.h>

void longestPalindromeSubstring(char str[]) {
    int i, j, length;
    int maxLength = 1, start = 0;
    int table[1000][1000] = {0};
    
    length = strlen(str);
    
    // 单个字符都是回文子串
    for (i = 0; i < length; ++i) {
        table[i][i] = 1;
    }
    
    // 判断长度为2的子串是否是回文子串
    for (i = 0; i < length - 1; ++i) {
        if (str[i] == str[i + 1]) {
            table[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }
    
    // 判断长度大于2的子串是否是回文子串
    for (i = 3; i <= length; ++i) {
        for (j = 0; j < length - i + 1; ++j) {
            int k = j + i - 1;
            
            if (table[j + 1][k - 1] && str[j] == str[k]) {
                table[j][k] = 1;
                
                if (i > maxLength) {
                    start = j;
                    maxLength = i;
                }
            }
        }
    }
    
    printf("最长回文子串：");
    
    for (i = start; i < start + maxLength; ++i) {
        printf("%c", str[i]);
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%s", str);
    
    longestPalindromeSubstring(str);
    
    return 0;
}
