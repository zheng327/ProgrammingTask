/* 题目15：编写一个程序，接受一个字符串输入，计算并打印出该字符串中每个字符出现的次数。
例如，对于输入的字符串"hello"，输出应为：
h: 1
e: 1
l: 2
o: 1 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int count[26] = {0};
    
    printf("请输入一个字符串：");
    scanf("%s", str);
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    
    for (i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }
    
    return 0;
}
