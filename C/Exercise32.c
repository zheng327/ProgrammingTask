/* ��Ŀ32����дһ�����򣬽���һ���������룬�жϸ������Ƿ��ǻ���������
����������ָ���ǻ���������������������
���磬131�ǻ�����������Ϊ���ǻ���������������*/
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

int isPalindrome(int num) {
    int reversed = 0, remainder, original;
    
    original = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }
    
    return (original == reversed);
}

int isPalindromePrime(int num) {
    return (isPalindrome(num) && isPrime(num));
}

int main() {
    int num;
    
    printf("������һ��������");
    scanf("%d", &num);
    
    if (isPalindromePrime(num)) {
        printf("%d �ǻ���������\n", num);
    } else {
        printf("%d ���ǻ���������\n", num);
    }
    
    return 0;
}
