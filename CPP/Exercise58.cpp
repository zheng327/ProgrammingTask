// ��Ŀ58����дһ������ʵ�ּ򵥵ļ��������ܡ�
// ����һ��ֻ�����Ǹ��������ӷ��ͼ������ַ������ʽ�������������

#include <iostream>
#include <stack>

int calculate(const std::string& expression) {
    std::stack<int> nums;
    std::stack<char> ops;
    int num = 0;
    char op = '+';

    for (char c : expression) {
        if (std::isdigit(c)) {
            num = num * 10 + (c - '0');
        }

        if (!std::isdigit(c) && c != ' ' || c == expression.back()) {
            if (op == '+') {
                nums.push(num);
            } else if (op == '-') {
                nums.push(-num);
            }

            num = 0;
            op = c;
        }
    }

    int result = 0;

    while (!nums.empty()) {
        result += nums.top();
        nums.pop();
    }

    return result;
}

int main() {
    std::string expression;
    std::cout << "������һ�����ʽ��";
    std::getline(std::cin, expression);

    int result = calculate(expression);

    std::cout << "��������" << result << std::endl;

    return 0;
}
