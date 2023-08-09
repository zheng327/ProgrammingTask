/* 题目23：编写一个程序，接受一个整数输入，将其转换为罗马数字表示。
罗马数字由七个不同的符号表示：I、V、X、L、C、D和M，分别代表1、5、10、50、100、500和1000。
例如，对于输入的整数9，转换为罗马数字表示为"IX"。*/
#include <stdio.h>

void intToRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i;
    
    printf("罗马数字表示为：");
    
    for (i = 0; i < 13; ++i) {
        while (num >= decimal[i]) {
            printf("%s", roman[i]);
            num -= decimal[i];
        }
    }
    
    printf("\n");
}

int main() {
    int num;
    
    printf("请输入一个整数：");
    scanf("%d", &num);
    
    intToRoman(num);
    
    return 0;
}
