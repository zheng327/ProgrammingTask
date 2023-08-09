// ��Ŀ54����дһ�������ж�һ������ͼ�Ƿ�Ϊ����
// ����ͼ���ڽӾ�������Ƿ�Ϊ����

#include <iostream>
#include <vector>
#include <queue>

bool isTree(const std::vector<std::vector<int>>& graph) {
    int n = graph.size();

    std::vector<bool> visited(n, false);
    std::queue<int> q;

    // ����һ���ڵ�������
    q.push(0);
    visited[0] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        for (int i = 0; i < n; i++) {
            if (graph[node][i] == 1) {
                if (visited[i]) {
                    // ���ڻ�·��������
                    return false;
                } else {
                    q.push(i);
                    visited[i] = true;
                }
            }
        }
    }

    // �ж��Ƿ���δ���ʵĽڵ㣬���У�������
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
        std::cout << "��ͼ����" << std::endl;
    } else {
        std::cout << "��ͼ������" << std::endl;
    }

    return 0;
}
