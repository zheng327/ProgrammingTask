/* ��Ŀ26����дһ�����򣬽���һ���ַ������룬�����е�ÿ�����ʷ�ת������ӡ��ת����ַ�����
���磬����������ַ���"Hello World"�����ӦΪ��"olleH dlroW"��*/
#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int i, j = 0, start, end;
    int length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] == ' ') {
            end = i - 1;
            
            for (start = j, end = i - 1; start < end; ++start, --end) {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
            }
            
            j = i + 1;
        }
    }
    
    end = length - 1;
    
    for (start = j, end = length - 1; start < end; ++start, --end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
    
    printf("��ת����ַ�����%s\n", str);
}

int main() {
    char str[100];
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    reverseWords(str);
    
    return 0;
}
