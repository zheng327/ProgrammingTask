// ��Ŀ41����дһ�����򣬽����û������һ�����������������е����ֵ����Сֵ��
// ������0���������������ֵ����Сֵ�ļ��㡣

#include <iostream>
#include <limits>

int main() {
    int num;
    int max = std::numeric_limits<int>::min(); // ������СֵΪint���͵���Сֵ
    int min = std::numeric_limits<int>::max(); // �������ֵΪint���͵����ֵ

    while (true) {
        std::cout << "������һ������������0��������";
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (num > max) {
            max = num;
        }

        if (num < min) {
            min = num;
        }
    }

    std::cout << "���ֵ�ǣ�" << max << std::endl;
    std::cout << "��Сֵ�ǣ�" << min << std::endl;

    return 0;
}
