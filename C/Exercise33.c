/* 题目33：编写一个程序，接受一个字符串输入，计算并打印出字符串中的最长单词及其长度。
单词由空格分隔，并且不包含其他标点符号。
例如，对于输入的字符串"This is a sample sentence."，最长单词为"sentence"，长度为8。*/
#include <stdio.h>
#include <string.h>

void longestWord(char str[]) {
    int i, length, maxLength = 0;
    char longest[100];
    char *token;
    
    token = strtok(str, " ");
    
    while (token != NULL) {
        int wordLength = strlen(token);
        
        if (wordLength > maxLength) {
            maxLength = wordLength;
            strcpy(longest, token);
        }
        
        token = strtok(NULL, " ");
    }
    
    printf("最长单词：%s，长度：%d\n", longest, maxLength);
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    longestWord(str);
    
    return 0;
}
