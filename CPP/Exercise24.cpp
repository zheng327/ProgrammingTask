// ��Ŀ24����дһ�����򣬽����û������һ��������n��Ȼ���ж�n�Ƿ������ꡣ

#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year;
    std::cout << "������һ����ݣ�";
    std::cin >> year;
    if (isLeapYear(year)) {
        std::cout << year << "�����ꡣ" << std::endl;
    } else {
        std::cout << year << "�������ꡣ" << std::endl;
    }
    return 0;
}
