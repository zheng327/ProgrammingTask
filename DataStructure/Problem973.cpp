/*
973. 最接近原点的 K 个点
给定一个数组 points ，其中 points[i] = [xi, yi] 表示 X-Y 平面上的一个点，并且是一个整数 k ，返回离原点 (0,0) 最近的 k 个点。
这里，平面上两点之间的距离是 欧几里德距离（ √(x1 - x2)2 + (y1 - y2)2 ）。
你可以按 任何顺序 返回答案。除了点坐标的顺序之外，答案 确保 是 唯一 的。

示例 1：
输入：points = [[1,3],[-2,2]], k = 1
输出：[[-2,2]]
解释： 
(1, 3) 和原点之间的距离为 sqrt(10)，
(-2, 2) 和原点之间的距离为 sqrt(8)，
由于 sqrt(8) < sqrt(10)，(-2, 2) 离原点更近。
我们只需要距离原点最近的 K = 1 个点，所以答案就是 [[-2,2]]。

示例 2：
输入：points = [[3,3],[5,-1],[-2,4]], k = 2
输出：[[3,3],[-2,4]]
（答案 [[-2,4],[3,3]] 也会被接受。）
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, int>> q;
        for(int i = 0; i < k; i++){
            q.emplace(points[i][0] * points[i][0] + points[i][1] * points[i][1], i);
        }
        int n = points.size();
        for(int i = k; i < n; i++){
            int dist = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            if(dist < q.top().first){
                q.pop();
                q.emplace(dist, i);
            }
        }
        vector<vector<int>> ans;
        while(!q.empty()){
            ans.push_back(points[q.top().second]);
            q.pop();
        }
        return ans;
    }
};

int main(){
    vector<vector<int>> points1 = {{1,3},{-2,2}};
    vector<vector<int>> points2 = {{3,3},{5,-1},{-2,4}};
    Solution solution;

    vector<vector<int>> res1 = solution.kClosest(points1, 1);
    vector<vector<int>> res2 = solution.kClosest(points2, 2);

    cout << "[";
    for(vector<int> i:res1){
        cout << " [";
        for(int j:i){
            cout << " " << j << " ";
        }
        cout << "] ";
    }
    cout << "]" << endl;

    cout << "[";
    for(vector<int> i:res2){
        cout << " [";
        for(int j:i){
            cout << " " << j << " ";
        }
        cout << "] ";
    }
    cout << "]" << endl;
}
