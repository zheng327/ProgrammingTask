// ��Ŀ45����дһ�����򣬽����û������һ���ַ���������ת�ַ����е�ÿ�����ʡ�

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

int main() {
    std::string input;
    std::cout << "������һ���ַ�����";
    std::getline(std::cin, input);

    std::stringstream ss(input);
    std::string word;
    std::string reversedString;

    while (ss >> word) {
        std::reverse(word.begin(), word.end());
        reversedString += word + " ";
    }

    std::cout << "��ת����ַ�����" << reversedString << std::endl;

    return 0;
}
