/* ��Ŀ22����дһ�����򣬽���һ���ַ������룬���㲢��ӡ�����ַ����г��ִ��������ַ�������ִ�����
���磬����������ַ���"hello world"������ֵ��ַ��� 'l'�����ִ���Ϊ3��*/
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
    
    printf("����ֵ��ַ��� '%c'�����ִ���Ϊ %d��\n", mostChar, maxCount);
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    mostFrequentChar(str);
    
    return 0;
}
