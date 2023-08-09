/*
题目：字符串压缩
描述：编写一个函数，将字符串中重复的字符进行压缩，返回压缩后的字符串。
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *compressString(const char *str) {
    int len = strlen(str);
    char *compressed = (char *)malloc(sizeof(char) * (len + 1));
    int count = 1;
    int index = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == str[i + 1]) {
            count++;
        } else {
            compressed[index++] = str[i];
            char countStr[10];
            sprintf(countStr, "%d", count);
            int countLen = strlen(countStr);
            for (int j = 0; j < countLen; j++) {
                compressed[index++] = countStr[j];
            }
            count = 1;
        }
    }

    compressed[index] = '\0';
    return compressed;
}

int main() {
    const char *str = "aaabbbccccddde";
    char *compressed = compressString(str);
    printf("Compressed string: %s\n", compressed);
    free(compressed);
    return 0;
}
