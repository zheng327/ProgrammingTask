/*
84. 柱状图中最大的矩形
给定 n 个非负整数，用来表示柱状图中各个柱子的高度。每个柱子彼此相邻，且宽度为 1 。
求在该柱状图中，能够勾勒出来的矩形的最大面积。

示例 1:
输入：heights = [2,1,5,6,2,3]
输出：10
解释：最大的矩形为图中红色区域，面积为 10

示例 2：
输入： heights = [2,4]
输出： 4
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> left(n), right(n);

        stack<int> mono_stack;
        for(int i = 0; i < n; ++i){
            while(!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]){
                mono_stack.pop();
            }
            left[i] = (mono_stack.empty() ? -1 : mono_stack.top());
            mono_stack.push(i);
        }

        mono_stack = stack<int>();
        for(int i = n - 1; i >= 0; --i){
            while(!mono_stack.empty() && heights[mono_stack.top()] >= heights[i]){
                mono_stack.pop();
            }
            right[i] = (mono_stack.empty() ? n : mono_stack.top());
            mono_stack.push(i);
        }

        int ans = 0;
        for(int i = 0; i < n; ++i){
            ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
        }
        return ans;
    }
};

int main(){
    vector<int> heights1 = {2,1,5,6,2,3};
    vector<int> heights2 = {2,4};
    Solution solution;
    int res1 = solution.largestRectangleArea(heights1);
    int res2 = solution.largestRectangleArea(heights2);
    cout << "res1=" << res1 << endl;
    cout << "res2=" << res2 << endl;
}