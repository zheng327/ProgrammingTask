/* ��Ŀ28����дһ�����򣬽���һ���������룬�жϸ������Ƿ���������
������ָ���������ӣ�����������������ӣ��ĺ͵��ڸ��������������
���磬6����������Ϊ6����������1��2����1 + 2 = 3��*/
#include <stdio.h>

int isPerfectNumber(int num) {
    int i, sum = 0;
    
    for (i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sum += i;
        }
    }
    
    return (sum == num);
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isPerfectNumber(num)) {
        printf("%d ��������\n", num);
    } else {
        printf("%d ����������\n", num);
    }
    
    return 0;
}
