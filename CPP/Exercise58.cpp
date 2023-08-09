// 题目58：编写一个程序，实现简单的计算器功能。
// 输入一个只包含非负整数、加法和减法的字符串表达式，输出计算结果。

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
    std::cout << "请输入一个表达式：";
    std::getline(std::cin, expression);

    int result = calculate(expression);

    std::cout << "计算结果：" << result << std::endl;

    return 0;
}
