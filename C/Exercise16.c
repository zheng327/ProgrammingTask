/* ��Ŀ16����дһ�����򣬽���һ���ַ������룬�����еĴ�д��ĸת��ΪСд��ĸ������ӡת������ַ�����
���磬����������ַ���"Hello World"�����ӦΪ��"hello world"��*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, length;
    
    printf("������һ���ַ�����");
    scanf("%[^\n]", str);
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        str[i] = tolower(str[i]);
    }
    
    printf("ת������ַ�����%s\n", str);
    
    return 0;
}
