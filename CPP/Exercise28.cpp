// ��Ŀ28����дһ�����򣬽����û������һ���ַ�����Ȼ��ͳ�Ʋ�����ַ����еĵ��ʸ�����

#include <iostream>
#include <string>
#include <sstream>

int countWords(const std::string& str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while (iss >> word) {
        count++;
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::getline(std::cin, str);
    std::cout << "���ʸ�����" << countWords(str) << std::endl;
    return 0;
}
