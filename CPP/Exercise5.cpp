// ��Ŀ5����дһ�����򣬽����û������һ���ַ�����Ȼ���䷴ת�������

#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::cin >> str;
    std::reverse(str.begin(), str.end());
    std::cout << "��ת����ַ����ǣ�" << str << std::endl;
    return 0;
}
