/* ��Ŀ37����дһ�����򣬽���һ���ַ������룬�жϸ��ַ����Ƿ��ǻ��ľ��ӡ�
���ľ�����ָ����͵��������һ���ľ��ӣ����Կո�ͱ����š�
���磬"A man, a plan, a canal, Panama!" �ǻ��ľ��ӡ�*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindromeSentence(char str[]) {
    int i, j, length;
    char stripped[100];
    
    length = strlen(str);
    
    j = 0;
    for (i = 0; i < length; ++i) {
        if (isalpha(str[i])) {
            stripped[j++] = tolower(str[i]);
        }
    }
    stripped[j] = '\0';
    
    length = strlen(stripped);
    
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        if (stripped[i] != stripped[j]) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    if (isPalindromeSentence(str)) {
        printf("%s �ǻ��ľ��ӡ�\n", str);
    } else {
        printf("%s ���ǻ��ľ��ӡ�\n", str);
    }
    
    return 0;
}
