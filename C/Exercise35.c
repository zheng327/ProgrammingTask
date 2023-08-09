/* 题目35：编写一个程序，接受一个字符串输入，判断该字符串是否是句子。
句子是以句号（.）、问号（?）或感叹号（!）结尾的字符串。
例如，"Hello World." 是句子，而 "Hello World" 不是句子。*/
#include <stdio.h>
#include <string.h>

int isSentence(char str[]) {
    int length = strlen(str);
    
    if (length == 0) {
        return 0;
    }
    
    return (str[length - 1] == '.' || str[length - 1] == '?' || str[length - 1] == '!');
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    if (isSentence(str)) {
        printf("%s 是句子。\n", str);
    } else {
        printf("%s 不是句子。\n", str);
    }
    
    return 0;
}
