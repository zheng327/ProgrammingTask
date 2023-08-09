/* 题目31：编写一个程序，接受一个字符串输入，统计并打印出字符串中的元音字母数量。
元音字母包括字母a、e、i、o、u（不区分大小写）。
例如，对于输入的字符串"Hello World"，输出应为：3。*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(char str[]) {
    int i, length, count = 0;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        char ch = tolower(str[i]);
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    printf("元音字母数量：%d\n", countVowels(str));
    
    return 0;
}
