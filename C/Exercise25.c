/* ��Ŀ25����дһ�����򣬽���һ���������룬���㲢��ӡ������С�ڸ�������������
������ָ����1��������û���������ӵ�������
���磬�������������10��С��10������Ϊ2��3��5��7��*/
#include <stdio.h>

void printPrimes(int num) {
    int i, j;
    
    printf("С��%d��������", num);
    
    for (i = 2; i < num; ++i) {
        int isPrime = 1;
        
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    printPrimes(num);
    
    return 0;
}
