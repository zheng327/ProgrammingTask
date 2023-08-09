// ��Ŀ52����дһ�����򣬼���һ���ַ����г���Ƶ����ߵ��ַ�������ִ�����
// �ַ�����ֻ����Сд��ĸ�����Һ��Կո�ͱ����š�

#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string input;
    std::cout << "������һ���ַ�����";
    std::getline(std::cin, input);

    std::unordered_map<char, int> frequencyMap;

    for (char c : input) {
        if (std::isalpha(c)) {
            c = std::tolower(c);
            frequencyMap[c]++;
        }
    }

    char maxChar = '\0';
    int maxFreq = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFreq) {
            maxChar = pair.first;
            maxFreq = pair.second;
        }
    }

    std::cout << "����Ƶ����ߵ��ַ��ǣ�" << maxChar << std::endl;
    std::cout << "���ִ���Ϊ��" << maxFreq << std::endl;

    return 0;
}
