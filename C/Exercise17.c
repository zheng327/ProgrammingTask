/* ��Ŀ17����дһ�����򣬽���һ���������룬���㲢��ӡ��쳲����������е�N������ֵ��
쳲�����������һ���� 0 �� 1 ��ʼ���������У�������ÿ��������ǰ������֮�͡�
���磬�������������6����6��쳲�������Ϊ8��*/
#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    printf("��%d��쳲�������Ϊ%d\n", num, fibonacci(num));
    
    return 0;
}
