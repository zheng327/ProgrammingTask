// ��Ŀ21����дһ�����򣬽����û������һ���ַ�����Ȼ���жϸ��ַ����Ƿ��ǻ��Ĵ���
// ���Ĵ���ָ����ͷ���ƴд��һ�����ַ�����

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
        std::cout << str << "�ǻ��Ĵ���" << std::endl;
    } else {
        std::cout << str << "���ǻ��Ĵ���" << std::endl;
    }
    return 0;
}
