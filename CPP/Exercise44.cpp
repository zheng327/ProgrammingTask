// ��Ŀ44����дһ�����򣬽����û������һ�����������ж������Ƿ�����ظ������֡�

#include <iostream>
#include <unordered_set>

int main() {
    int num;
    std::unordered_set<int> numSet;

    while (true) {
        std::cout << "������һ������������0��������";
        std::cin >> num;

        if (num == 0) {
            break;
        }

        if (numSet.count(num) > 0) {
            std::cout << "�����ظ�������" << std::endl;
            return 0;
        }

        numSet.insert(num);
    }

    std::cout << "�������ظ�������" << std::endl;

    return 0;
}
