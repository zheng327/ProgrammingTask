// ��Ŀ6����дһ�����򣬽����û������һ���ַ�����Ȼ���ж����Ƿ��ǻ����ַ�����

#include <iostream>
#include <string>
#include <algorithm>

bool isPalindrome(const std::string& str) {
    std::string reversed = str;
    std::reverse(reversed.begin(), reversed.end());
    return str == reversed;
}

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::cin >> str;
    if (isPalindrome(str)) {
        std::cout << str << "�ǻ����ַ�����" << std::endl;
    } else {
        std::cout << str << "���ǻ����ַ�����" << std::endl;
    }
    return 0;
}
