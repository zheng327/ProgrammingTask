/* ��Ŀ15����дһ�����򣬽���һ���ַ������룬���㲢��ӡ�����ַ�����ÿ���ַ����ֵĴ�����
���磬����������ַ���"hello"�����ӦΪ��
h: 1
e: 1
l: 2
o: 1 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;
    int count[26] = {0};
    
    printf("������һ���ַ�����");
    scanf("%s", str);
    
    length = strlen(str);
    
    for (i = 0; i < length; ++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
        }
    }
    
    for (i = 0; i < 26; ++i) {
        if (count[i] != 0) {
            printf("%c: %d\n", 'a' + i, count[i]);
        }
    }
    
    return 0;
}
