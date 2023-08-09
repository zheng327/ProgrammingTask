// 题目54：编写一个程序，判断一个无向图是否为树。
// 输入图的邻接矩阵，输出是否为树。

#include <iostream>
#include <vector>
#include <queue>

bool isTree(const std::vector<std::vector<int>>& graph) {
    int n = graph.size();

    std::vector<bool> visited(n, false);
    std::queue<int> q;

    // 将第一个节点加入队列
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1) {
                if (visited[i]) {
                    // 存在环路，不是树
                    return false;
                } else {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    // 判断是否有未访问的节点，若有，则不是树
    for (bool visit : visited) {
        if (!visit) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> graph = {
        {0, 1, 0, 0},
        {1, 0, 1, 1},
        {0, 1, 0, 0},
        {0, 1, 0, 0}
    };

    if (isTree(graph)) {
        std::cout << "该图是树" << std::endl;
    } else {
        std::cout << "该图不是树" << std::endl;
    }

    return 0;
}
