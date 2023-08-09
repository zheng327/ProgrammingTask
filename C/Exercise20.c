/* 题目20：编写一个程序，接受一个字符串输入，删除其中的所有空格，并打印删除空格后的字符串。
例如，对于输入的字符串"This is a sample sentence."，输出应为："Thisisasamplesentence."。*/
#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) {
    int i, j = 0, length;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    removeSpaces(str);
    
    printf("删除空格后的字符串：%s\n", str);
    
    return 0;
}
