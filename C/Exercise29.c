/* 题目29：编写一个程序，接受一个字符串输入，计算并打印出字符串中出现次数为奇数的字符及其出现次数。
例如，对于输入的字符串"hello world"，出现次数为奇数的字符有 'e'、'o'，且出现次数分别为1、2。*/
#include <stdio.h>
#include <string.h>

void oddFrequencyChar(char str[]) {
    int i, length;
    int count[256] = {0};
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        count[str[i]]++;
    }
    
    printf("出现次数为奇数的字符及其出现次数：");
    
    for (i = 0; i < 256; ++i) {
        if (count[i] % 2 != 0) {
            printf("'%c': %d ", i, count[i]);
        }
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("请输入一个字符串：");
    scanf("%[^\n]", str);
    
    oddFrequencyChar(str);
    
    return 0;
}
