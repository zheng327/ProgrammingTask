/* 题目18：编写一个程序，接受一个字符串输入，计算并打印出该字符串中的单词数。
单词由空格分隔，并且不包含其他标点符号。
例如，对于输入的字符串"This is a sample sentence."，单词数为5。*/
#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int i, count = 1, length;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] == ' ') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    printf("单词数：%d\n", countWords(str));
    
    return 0;
}
