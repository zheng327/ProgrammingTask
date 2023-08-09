/* ��Ŀ21����дһ�����򣬽���һ���ַ������룬�жϸ��ַ����Ƿ�����Ч��IP��ַ��
��Ч��IP��ַ���ĸ��õ�ָ���������ɣ�ÿ��������ȡֵ��ΧΪ0-255��
���磬"192.168.0.1" ����Ч��IP��ַ���� "256.0.0.1" ������Ч��IP��ַ��*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isValidIP(char str[]) {
    char *token;
    int count = 0;
    
    token = strtok(str, ".");
    
    while (token != NULL) {
        int num = atoi(token);
        
        if (num < 0 || num > 255) {
            return 0;
        }
        
        token = strtok(NULL, ".");
        count++;
    }
    
    return (count == 4);
}

int main() {
    char str[100];
    
    printf("������һ��IP��ַ��");
    scanf("%s", str);
    
    if (isValidIP(str)) {
        printf("%s ����Ч��IP��ַ��\n", str);
    } else {
        printf("%s ������Ч��IP��ַ��\n", str);
    }
    
    return 0;
}
