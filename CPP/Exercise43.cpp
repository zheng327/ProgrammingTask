// ��Ŀ43����дһ����������һ��ָ�����ȵ�쳲��������С�
// 쳲��������е�ǰ����������0��1��������������ǰ��������֮�͡�

#include <iostream>

int main() {
    int length;
    std::cout << "������쳲��������еĳ��ȣ�";
    std::cin >> length;

    int a = 0;
    int b = 1;

    std::cout << "쳲��������У�";
    for (int i = 0; i < length; i++) {
        std::cout << a << " ";

        int temp = a + b;
        a = b;
        b = temp;
    }

    return 0;
}
