/* 题目24：编写一个程序，接受一个字符串输入，将字符串中的每个单词首字母大写，并打印修改后的字符串。
例如，对于输入的字符串"hello world"，输出应为："Hello World"。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeWords(char str[]) {
    int i, length;
    
    length = strlen(str);
    
    if (length > 0) {
        str[0] = toupper(str[0]);
    }
    
    for (i = 1; i < length; ++i) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    
    printf("修改后的字符串：%s\n", str);
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    capitalizeWords(str);
    
    return 0;
}
