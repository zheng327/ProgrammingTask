// 题目60：编写一个程序，实现背包问题的动态规划解法。
// 输入一组物品的重量和价值，以及背包的容量，输出可以装入背包的物品的最大总价值。

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

    std::cout << "背包中物品的最大总价值：" << maxValue << std::endl;

    return 0;
}
