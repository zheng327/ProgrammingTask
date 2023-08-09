/* 题目27：编写一个程序，接受一个字符串输入，将其中的数字字符提取出来并打印。
例如，对于输入的字符串"Hello123World456"，输出应为："123456"。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void extractNumbers(char str[]) {
    int i, j = 0, length;
    
    length = strlen(str);
    
    printf("提取出的数字：");
    
    for (i = 0; i < length; ++i) {
        if (isdigit(str[i])) {
            printf("%c", str[i]);
        }
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    extractNumbers(str);
    
    return 0;
}
