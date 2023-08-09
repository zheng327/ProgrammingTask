/* 题目16：编写一个程序，接受一个字符串输入，将其中的大写字母转换为小写字母，并打印转换后的字符串。
例如，对于输入的字符串"Hello World"，输出应为："hello world"。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, length;
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        str[i] = tolower(str[i]);
    }
    
    printf("转换后的字符串：%s\n", str);
    
    return 0;
}
