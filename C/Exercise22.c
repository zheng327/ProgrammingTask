/* 题目22：编写一个程序，接受一个字符串输入，计算并打印出该字符串中出现次数最多的字符及其出现次数。
例如，对于输入的字符串"hello world"，最常出现的字符是 'l'，出现次数为3。*/
#include <stdio.h>
#include <string.h>

void mostFrequentChar(char str[]) {
    int i, length, maxCount = 0;
    int count[256] = {0};
    char mostChar;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        count[str[i]]++;
        
        if (count[str[i]] > maxCount) {
            maxCount = count[str[i]];
            mostChar = str[i];
        }
    }
    
    printf("最常出现的字符是 '%c'，出现次数为 %d。\n", mostChar, maxCount);
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    mostFrequentChar(str);
    
    return 0;
}
