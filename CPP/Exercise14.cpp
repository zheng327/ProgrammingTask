// ��Ŀ14����дһ�����򣬽����û������һ���ַ�����Ȼ��ͳ�Ʋ�����ַ����е���ĸ�����ֺ������ַ��ĸ�����

#include <iostream>
#include <cctype>

void countCharacters(const std::string& str) {
    int letters = 0, digits = 0, others = 0;
    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        } else if (isdigit(c)) {
            digits++;
        } else {
            others++;
        }
    }
    std::cout << "��ĸ������" << letters << std::endl;
    std::cout << "���ָ�����" << digits << std::endl;
    std::cout << "�����ַ�������" << others << std::endl;
}

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::cin >> str;
    countCharacters(str);
    return 0;
}
