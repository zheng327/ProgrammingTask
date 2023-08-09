// ��Ŀ59����дһ������ʵ���ַ�����������ϡ�
// ����һ���ַ�����������п��ܵ�������ϡ�

#include <iostream>
#include <vector>
#include <algorithm>

void permute(std::vector<std::string>& result, std::string& str, int start) {
    if (start == str.length() - 1) {
        result.push_back(str);
        return;
    }

    for (int i = start; i < str.length(); i++) {
        std::swap(str[start], str[i]);
        permute(result, str, start + 1);
        std::swap(str[start], str[i]);
    }
}

std::vector<std::string> generatePermutations(const std::string& str) {
    std::vector<std::string> result;
    std::string temp = str;

    permute(result, temp, 0);

    return result;
}

int main() {
    std::string str;
    std::cout << "������һ���ַ�����";
    std::cin >> str;

    std::vector<std::string> permutations = generatePermutations(str);

    std::cout << "���п��ܵ�������ϣ�" << std::endl;
    for (const std::string& perm : permutations) {
        std::cout << perm << std::endl;
    }

    return 0;
}
