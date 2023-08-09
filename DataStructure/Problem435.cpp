/*
435. 无重叠区间
给定一个区间的集合 intervals ，其中 intervals[i] = [starti, endi] 。返回 需要移除区间的最小数量，使剩余区间互不重叠 。

示例 1:
输入: intervals = [[1,2],[2,3],[3,4],[1,3]]
输出: 1
解释: 移除 [1,3] 后，剩下的区间没有重叠。

示例 2:
输入: intervals = [ [1,2], [1,2], [1,2] ]
输出: 2
解释: 你需要移除两个 [1,2] 来使剩下的区间没有重叠。

示例 3:
输入: intervals = [ [1,2], [2,3] ]
输出: 0
解释: 你不需要移除任何区间，因为它们已经是无重叠的了。
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.empty()){
            return 0;
        }
        sort(intervals.begin(), intervals.end(), [](const auto& u, const auto&v){
            return u[1] < v[1];
        });

        int n =intervals.size();
        int right = intervals[0][1];
        int res = 1;
        for(int i = 1; i < n; i++){
            if(intervals[i][0] >= right){
                res++;
                right = intervals[i][1];
            }
        }
        return n - res;
    }
};

int main(){
    vector<vector<int>> intervals1 = {{1,2},{2,3},{3,4},{1,3}};
    vector<vector<int>> intervals2 = {{1,2},{1,2},{1,2}};
    vector<vector<int>> intervals3 = {{1,2},{2,3}};

    Solution solution;

    cout << solution.eraseOverlapIntervals(intervals1) << endl;
    cout << solution.eraseOverlapIntervals(intervals2) << endl;
    cout << solution.eraseOverlapIntervals(intervals3) << endl;
}