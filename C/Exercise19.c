/* ��Ŀ19����дһ�����򣬽���һ���������룬�жϸ������Ƿ���������
������ָ����1��������û���������ӵ�������
���磬7����������4����������*/
#include <stdio.h>

int isPrime(int num) {
    int i;
    
    if (num <= 1) {
        return 0;
    }
    
    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    
    return 1;
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isPrime(num)) {
        printf("%d ��������\n", num);
    } else {
        printf("%d ����������\n", num);
    }
    
    return 0;
}
