/* 题目21：编写一个程序，接受一个字符串输入，判断该字符串是否是有效的IP地址。
有效的IP地址由四个用点分隔的整数组成，每个整数的取值范围为0-255。
例如，"192.168.0.1" 是有效的IP地址，而 "256.0.0.1" 不是有效的IP地址。*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidIP(char str[]) {
    char *token;
    int count = 0;
    
    token = strtok(str, ".");
    
    while (token != NULL) {
        int num = atoi(token);
        
        if (num < 0 || num > 255) {
            return 0;
        }
        
        token = strtok(NULL, ".");
        count++;
    }
    
    return (count == 4);
}

int main() {
    char str[100];
    
    printf("请输入一个IP地址：");
    scanf("%s", str);
    
    if (isValidIP(str)) {
        printf("%s 是有效的IP地址。\n", str);
    } else {
        printf("%s 不是有效的IP地址。\n", str);
    }
    
    return 0;
}
