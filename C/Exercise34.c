/* ��Ŀ34����дһ�����򣬽���һ���������룬�жϸ������Ƿ���ǿ������
ǿ������ָ�����е������ӵĺʹ��ڸ��������������
���磬12��ǿ��������Ϊ12����������1��2��3��4��6����1 + 2 + 3 + 4 + 6 = 16 > 12��*/
#include <stdio.h>

int isStrongNumber(int num) {
    int i, sum = 0;
    
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum > num);
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isStrongNumber(num)) {
        printf("%d ��ǿ������\n", num);
    } else {
        printf("%d ����ǿ������\n", num);
    }
    
    return 0;
}
