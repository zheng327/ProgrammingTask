/* ��Ŀ14����дһ�����򣬽���һ���ַ������룬�жϸ��ַ����Ƿ��ǻ����ַ�����
�����ַ�����ָ����͵��������һ�����ַ�����
���磬"level" �� "radar" ���ǻ����ַ�����*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int isPalindrome = 1;
    
    printf("������һ���ַ�����");
    scanf("%s", str);
    
    length = strlen(str);
    
    for (i = 0; i < length / 2; ++i) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome) {
        printf("%s �ǻ����ַ�����\n", str);
    } else {
        printf("%s ���ǻ����ַ�����\n", str);
    }
    
    return 0;
}
