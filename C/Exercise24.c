/* ��Ŀ24����дһ�����򣬽���һ���ַ������룬���ַ����е�ÿ����������ĸ��д������ӡ�޸ĺ���ַ�����
���磬����������ַ���"hello world"�����ӦΪ��"Hello World"��*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalizeWords(char str[]) {
    int i, length;
    
    length = strlen(str);
    
    if (length > 0) {
        str[0] = toupper(str[0]);
    }
    
    for (i = 1; i < length; ++i) {
        if (str[i - 1] == ' ') {
            str[i] = toupper(str[i]);
        }
    }
    
    printf("�޸ĺ���ַ�����%s\n", str);
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    capitalizeWords(str);
    
    return 0;
}
