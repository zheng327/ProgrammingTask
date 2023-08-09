/*
456. 132 模式
给你一个整数数组 nums ，数组中共有 n 个整数。132 模式的子序列 由三个整数 nums[i]、nums[j] 和 nums[k] 组成，并同时满足：i < j < k 和 nums[i] < nums[k] < nums[j] 。
如果 nums 中存在 132 模式的子序列 ，返回 true ；否则，返回 false 。

示例 1：
输入：nums = [1,2,3,4]
输出：false
解释：序列中不存在 132 模式的子序列。

示例 2：
输入：nums = [3,1,4,2]
输出：true
解释：序列中有 1 个 132 模式的子序列： [1, 4, 2] 。

示例 3：
输入：nums = [-1,3,2,0]
输出：true
解释：序列中有 3 个 132 模式的的子序列：[-1, 3, 2]、[-1, 3, 0] 和 [-1, 2, 0] 。
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n = nums.size();
        stack<int> candidate_k;
        candidate_k.push(nums[n-1]);
        int max_k = INT_MIN;

        for(int i = n - 2; i >= 0; --i){
            if(nums[i] < max_k){
                return true;
            }
            while(!candidate_k.empty() && nums[i] > candidate_k.top()){
                max_k = candidate_k.top();
                candidate_k.pop();
            }
            if(nums[i] > max_k){
                candidate_k.push(nums[i]);
            }
        }
        return false;
    }
};

int main(){
    vector<int> nums1 = {1,2,3,4}, nums2 = {3,1,4,2}, nums3 = {-1,3,2,0};
    Solution solution;
    cout << solution.find132pattern(nums1) << endl;
    cout << solution.find132pattern(nums2) << endl;
    cout << solution.find132pattern(nums3) << endl;
}
