/* ��Ŀ38����дһ�����򣬽���һ���ַ������룬���㲢��ӡ���ַ����е�������Ӵ���
�����Ӵ���ָ����͵��������һ�����Ӵ���
���磬����������ַ���"babad"��������Ӵ�Ϊ"bab"��*/
#include <stdio.h>
#include <string.h>

void longestPalindromeSubstring(char str[]) {
    int i, j, length;
    int maxLength = 1, start = 0;
    int table[1000][1000] = {0};
    
    length = strlen(str);
    
    // �����ַ����ǻ����Ӵ�
    for (i = 0; i < length; ++i) {
        table[i][i] = 1;
    }
    
    // �жϳ���Ϊ2���Ӵ��Ƿ��ǻ����Ӵ�
    for (i = 0; i < length - 1; ++i) {
        if (str[i] == str[i + 1]) {
            table[i][i + 1] = 1;
            start = i;
            maxLength = 2;
        }
    }
    
    // �жϳ��ȴ���2���Ӵ��Ƿ��ǻ����Ӵ�
    for (i = 3; i <= length; ++i) {
        for (j = 0; j < length - i + 1; ++j) {
            int k = j + i - 1;
            
            if (table[j + 1][k - 1] && str[j] == str[k]) {
                table[j][k] = 1;
                
                if (i > maxLength) {
                    start = j;
                    maxLength = i;
                }
            }
        }
    }
    
    printf("������Ӵ���");
    
    for (i = start; i < start + maxLength; ++i) {
        printf("%c", str[i]);
    }
    
    printf("\n");
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%s", str);
    
    longestPalindromeSubstring(str);
    
    return 0;
}
