/* ��Ŀ13����дһ�����򣬽���һ���������룬���㲢��ӡ���������Ľ׳ˡ�
�׳���ָС�ڻ���ڸ��������������������ĳ˻���
���磬�������������5���׳�Ϊ1 * 2 * 3 * 4 * 5 = 120��*/
#include <stdio.h>

int main() {
    int num, i;
    unsigned long long factorial = 1;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    for (i = 1; i <= num; ++i) {
        factorial *= i;
    }
    
    printf("%d �Ľ׳�Ϊ %llu\n", num, factorial);
    
    return 0;
}
