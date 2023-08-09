/* 题目37：编写一个程序，接受一个字符串输入，判断该字符串是否是回文句子。
回文句子是指正序和倒序读都是一样的句子，忽略空格和标点符号。
例如，"A man, a plan, a canal, Panama!" 是回文句子。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindromeSentence(char str[]) {
    int i, j, length;
    char stripped[100];
    
    length = strlen(str);
    
    j = 0;
    for (i = 0; i < length; ++i) {
        if (isalpha(str[i])) {
            stripped[j++] = tolower(str[i]);
        }
    }
    stripped[j] = '\0';
    
    length = strlen(stripped);
    
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        if (stripped[i] != stripped[j]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    if (isPalindromeSentence(str)) {
        printf("%s 是回文句子。\n", str);
    } else {
        printf("%s 不是回文句子。\n", str);
    }
    
    return 0;
}
