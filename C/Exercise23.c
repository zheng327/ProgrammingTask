/* ��Ŀ23����дһ�����򣬽���һ���������룬����ת��Ϊ�������ֱ�ʾ��
�����������߸���ͬ�ķ��ű�ʾ��I��V��X��L��C��D��M���ֱ����1��5��10��50��100��500��1000��
���磬�������������9��ת��Ϊ�������ֱ�ʾΪ"IX"��*/
#include <stdio.h>

void intToRoman(int num) {
    int decimal[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *roman[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i;
    
    printf("�������ֱ�ʾΪ��");
    
    for (i = 0; i < 13; ++i) {
        while (num >= decimal[i]) {
            printf("%s", roman[i]);
            num -= decimal[i];
        }
    }
    
    printf("\n");
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    intToRoman(num);
    
    return 0;
}
