// ��Ŀ42����дһ�����򣬽����û������һ���ַ�������ͳ�����еĵ�������
// ���赥��֮���Կո�ָ��������Ǳ����š�

#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::cout << "������һ���ַ�����";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    int count = 0;

    while (ss >> word) {
        count++;
    }

    std::cout << "������Ϊ��" << count << std::endl;

    return 0;
}
