/* ��Ŀ20����дһ�����򣬽���һ���ַ������룬ɾ�����е����пո񣬲���ӡɾ���ո����ַ�����
���磬����������ַ���"This is a sample sentence."�����ӦΪ��"Thisisasamplesentence."��*/
#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) {
    int i, j = 0, length;
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] != ' ') {
            str[j++] = str[i];
        }
    }
    
    str[j] = '\0';
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    removeSpaces(str);
    
    printf("ɾ���ո����ַ�����%s\n", str);
    
    return 0;
}
