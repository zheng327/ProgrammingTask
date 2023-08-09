/*
560. 和为 K 的子数组
给你一个整数数组 nums 和一个整数 k ，请你统计并返回 该数组中和为 k 的连续子数组的个数 。

示例 1：
输入：nums = [1,1,1], k = 2
输出：2

示例 2：
输入：nums = [1,2,3], k = 3
输出：2
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int count = 0, pre = 0;
        for(auto& x : nums){
            pre += x;
            if(mp.find(pre - k) != mp.end()){
                count += mp[pre-k];
            }
            mp[pre]++;
        }
        return count;
    }
};

int main(){
    vector<int> nums1 = {1,1,1}, nums2 = {1,2,3};
    Solution solution;

    cout << solution.subarraySum(nums1, 2) << endl;
    cout << solution.subarraySum(nums2, 3) << endl;
}
