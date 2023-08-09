/* ��Ŀ36����дһ�����򣬽���һ���������룬�жϸ������Ƿ���쳲���������
쳲���������ָǰ������Ϊ0��1��������ÿ��������ǰ������֮�͡�
���磬0��1��1��2��3��5��8�ȶ���쳲���������*/
#include <stdio.h>

int isFibonacci(int num) {
    int a = 0, b = 1, c;
    
    if (num == a || num == b) {
        return 1;
    }
    
    while (b <= num) {
        c = a + b;
        
        if (c == num) {
            return 1;
        }
        
        a = b;
        b = c;
    }
    
    return 0;
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isFibonacci(num)) {
        printf("%d ��쳲���������\n", num);
    } else {
        printf("%d ����쳲���������\n", num);
    }
    
    return 0;
}
