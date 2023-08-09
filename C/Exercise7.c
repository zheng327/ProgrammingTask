/*
题目7：图的深度优先搜索
描述：实现图的深度优先搜索算法。
*/
#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100

bool visited[MAX_VERTICES];
int graph[MAX_VERTICES][MAX_VERTICES];
int numVertices;

void initGraph() {
    numVertices = 6;

    for (int i = 0; i < numVertices; i++) {
        visited[i] = false;
        for (int j = 0; j < numVertices; j++) {
            graph[i][j] = 0;
        }
    }

    graph[0][1] = graph[1][0] = 1;
    graph[0][2] = graph[2][0] = 1;
    graph[1][3] = graph[3][1] = 1;
    graph[1][4] = graph[4][1] = 1;
    graph[2][4] = graph[4][2] = 1;
    graph[3][4] = graph[4][3] = 1;
    graph[3][5] = graph[5][3] = 1;
    graph[4][5] = graph[5][4] = 1;
}

void depthFirstSearch(int vertex) {
    printf("%d ", vertex);
    visited[vertex] = true;

    for (int i = 0; i < numVertices; i++) {
        if (graph[vertex][i] == 1 && !visited[i]) {
            depthFirstSearch(i);
        }
    }
}

int main() {
    initGraph();
    printf("Depth First Search: ");
    depthFirstSearch(0);
    printf("\n");
    return 0;
}
