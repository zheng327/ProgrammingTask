/* ��Ŀ29����дһ�����򣬽���һ���ַ������룬���㲢��ӡ���ַ����г��ִ���Ϊ�������ַ�������ִ�����
���磬����������ַ���"hello world"�����ִ���Ϊ�������ַ��� 'e'��'o'���ҳ��ִ����ֱ�Ϊ1��2��*/
#include <stdio.h>
#include <string.h>

void oddFrequencyChar(char str[]) {
    int i, length;
    int count[256] = {0};
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        count[str[i]]++;
    }
    
    printf("���ִ���Ϊ�������ַ�������ִ�����");
    
    for (i = 0; i < 256; ++i) {
        if (count[i] % 2 != 0) {
            printf("'%c': %d ", i, count[i]);
        }
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    oddFrequencyChar(str);
    
    return 0;
}
