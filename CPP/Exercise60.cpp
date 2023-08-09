// ��Ŀ60����дһ������ʵ�ֱ�������Ķ�̬�滮�ⷨ��
// ����һ����Ʒ�������ͼ�ֵ���Լ��������������������װ�뱳������Ʒ������ܼ�ֵ��

#include <iostream>
#include <vector>

int knapsack(const std::vector<int>& weights, const std::vector<int>& values, int capacity) {
    int n = weights.size();
    std::vector<std::vector<int>> dp(n + 1, std::vector<int>(capacity + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= capacity; j++) {
            if (weights[i - 1] <= j) {
                dp[i][j] = std::max(values[i - 1] + dp[i - 1][j - weights[i - 1]], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[n][capacity];
}

int main() {
    std::vector<int> weights = {2, 3, 4, 5};
    std::vector<int> values = {3, 4, 5, 6};
    int capacity = 5;

    int maxValue = knapsack(weights, values, capacity);

    std::cout << "��������Ʒ������ܼ�ֵ��" << maxValue << std::endl;

    return 0;
}
