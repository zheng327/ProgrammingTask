/* ��Ŀ31����дһ�����򣬽���һ���ַ������룬ͳ�Ʋ���ӡ���ַ����е�Ԫ����ĸ������
Ԫ����ĸ������ĸa��e��i��o��u�������ִ�Сд����
���磬����������ַ���"Hello World"�����ӦΪ��3��*/
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
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    printf("Ԫ����ĸ������%d\n", countVowels(str));
    
    return 0;
}
