/* ��Ŀ11����дһ�����򣬽���һ���������룬�жϸ������Ƿ��ǻ�������
��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
���磬121��12321���ǻ�������*/
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    if (original == reversed) {
        printf("%d �ǻ�������\n", original);
    } else {
        printf("%d ���ǻ�������\n", original);
    }
    
    return 0;
}
