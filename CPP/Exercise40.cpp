// ��Ŀ40����дһ�����򣬽����û������һ���ַ�����Ȼ���ַ����е�����Сд��ĸת��Ϊ��д��ĸ�������ת������ַ�����

#include <iostream>
#include <cctype>

void convertToLowercase(std::string& str) {
    for (char& c : str) {
        c = std::toupper(c);
    }
}

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::cin >> str;
    convertToLowercase(str);
    std::cout << "ת������ַ����ǣ�" << str << std::endl;
    return 0;
}
