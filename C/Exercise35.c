/* ��Ŀ35����дһ�����򣬽���һ���ַ������룬�жϸ��ַ����Ƿ��Ǿ��ӡ�
�������Ծ�ţ�.�����ʺţ�?�����̾�ţ�!����β���ַ�����
���磬"Hello World." �Ǿ��ӣ��� "Hello World" ���Ǿ��ӡ�*/
#include <stdio.h>
#include <string.h>

int isSentence(char str[]) {
    int length = strlen(str);
    
    if (length == 0) {
        return 0;
    }
    
    return (str[length - 1] == '.' || str[length - 1] == '?' || str[length - 1] == '!');
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    if (isSentence(str)) {
        printf("%s �Ǿ��ӡ�\n", str);
    } else {
        printf("%s ���Ǿ��ӡ�\n", str);
    }
    
    return 0;
}
