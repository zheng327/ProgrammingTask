/* ��Ŀ40����дһ�����򣬽���һ���������룬�жϸ������Ƿ�����ȫƽ������
��ȫƽ������ָ����д��ĳ��������ƽ����������
���磬16����ȫƽ��������Ϊ4 * 4 = 16��*/
#include <stdio.h>

int isPerfectSquare(int num) {
    int i;
    
    if (num < 0) {
        return 0;
    }
    
    for (i = 0; i * i <= num; ++i) {
        if (i * i == num) {
            return 1;
        }
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isPerfectSquare(num)) {
        printf("%d ����ȫƽ������\n", num);
    } else {
        printf("%d ������ȫƽ������\n", num);
    }
    
    return 0;
}
