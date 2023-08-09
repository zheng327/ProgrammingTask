// ��Ŀ57����дһ������ʵ���ַ�����������ʽƥ�䡣
// ����һ���ַ�����һ��������ʽ���ж��Ƿ�ƥ�䡣

#include <iostream>
#include <vector>

bool isMatch(const std::string& str, const std::string& pattern) {
    int m = str.length();
    int n = pattern.length();

    std::vector<std::vector<bool>> dp(m + 1, std::vector<bool>(n + 1, false));
    dp[0][0] = true;

    for (int j = 2; j <= n; j += 2) {
        if (pattern[j - 1] == '*') {
            dp[0][j] = dp[0][j - 2];
        }
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (str[i - 1] == pattern[j - 1] || pattern[j - 1] == '.') {
                dp[i][j] = dp[i - 1][j - 1];
            } else if (pattern[j - 1] == '*') {
                if (str[i - 1] == pattern[j - 2] || pattern[j - 2] == '.') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 2];
                } else {
                    dp[i][j] = dp[i][j - 2];
                }
            }
        }
    }

    return dp[m][n];
}

int main() {
    std::string str;
    std::string pattern;
    std::cout << "������һ���ַ�����";
    std::cin >> str;
    std::cout << "������һ��������ʽ��";
    std::cin >> pattern;

    if (isMatch(str, pattern)) {
        std::cout << "�ַ���ƥ��" << std::endl;
    } else {
        std::cout << "�ַ�����ƥ��" << std::endl;
    }

    return 0;
}
