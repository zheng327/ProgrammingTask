/* ��Ŀ18����дһ�����򣬽���һ���ַ������룬���㲢��ӡ�����ַ����еĵ�������
�����ɿո�ָ������Ҳ��������������š�
���磬����������ַ���"This is a sample sentence."��������Ϊ5��*/
#include <stdio.h>
#include <string.h>

int countWords(char str[]) {
    int i, count = 1, length;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] == ' ') {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    printf("��������%d\n", countWords(str));
    
    return 0;
}
