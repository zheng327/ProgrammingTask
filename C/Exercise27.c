/* ��Ŀ27����дһ�����򣬽���һ���ַ������룬�����е������ַ���ȡ��������ӡ��
���磬����������ַ���"Hello123World456"�����ӦΪ��"123456"��*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void extractNumbers(char str[]) {
    int i, j = 0, length;
    
    length = strlen(str);
    
    printf("��ȡ�������֣�");
    
    for (i = 0; i < length; ++i) {
        if (isdigit(str[i])) {
            printf("%c", str[i]);
        }
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    extractNumbers(str);
    
    return 0;
}
