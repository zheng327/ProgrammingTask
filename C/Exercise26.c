/* 题目26：编写一个程序，接受一个字符串输入，将其中的每个单词反转，并打印反转后的字符串。
例如，对于输入的字符串"Hello World"，输出应为："olleH dlroW"。*/
#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int i, j = 0, start, end;
    int length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] == ' ') {
            end = i - 1;
            
            for (start = j, end = i - 1; start < end; ++start, --end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
            }
            
            j = i + 1;
        }
    }
    
    end = length - 1;
    
    for (start = j, end = length - 1; start < end; ++start, --end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
    
    printf("反转后的字符串：%s\n", str);
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    reverseWords(str);
    
    return 0;
}
