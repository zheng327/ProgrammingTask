/* ��Ŀ33����дһ�����򣬽���һ���ַ������룬���㲢��ӡ���ַ����е�����ʼ��䳤�ȡ�
�����ɿո�ָ������Ҳ��������������š�
���磬����������ַ���"This is a sample sentence."�������Ϊ"sentence"������Ϊ8��*/
#include <stdio.h>
#include <string.h>

void longestWord(char str[]) {
    int i, length, maxLength = 0;
    char longest[100];
    char *token;
    
    token = strtok(str, " ");
    
    while (token != NULL) {
        int wordLength = strlen(token);
        
        if (wordLength > maxLength) {
            maxLength = wordLength;
            strcpy(longest, token);
        }
        
        token = strtok(NULL, " ");
    }
    
    printf("����ʣ�%s�����ȣ�%d\n", longest, maxLength);
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    longestWord(str);
    
    return 0;
}
