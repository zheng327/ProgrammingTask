/*
238. 除自身以外数组的乘积
给你一个整数数组 nums，返回 数组 answer ，其中 answer[i] 等于 nums 中除 nums[i] 之外其余各元素的乘积 。
题目数据 保证 数组 nums之中任意元素的全部前缀元素和后缀的乘积都在  32 位 整数范围内。
请不要使用除法，且在 O(n) 时间复杂度内完成此题。

示例 1:
输入: nums = [1,2,3,4]
输出: [24,12,8,6]

示例 2:
输入: nums = [-1,1,0,-3,3]
输出: [0,0,9,0,0]
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int length = nums.size();
        vector<int> L(length, 0), R(length, 0);

        vector<int> answer(length);

        L[0] = 1;
        for(int i = 1; i < length; i++){
            L[i] = nums[i - 1] * L[i - 1];
        }

        R[length - 1] = 1;
        for(int i = length - 2; i >= 0; i--){
            R[i] = nums[i + 1] * R[i + 1];
        }

        for(int i = 0; i < length; i++){
            answer[i] = L[i] * R[i];
        }
        return answer;
    }
};

int main(){
    vector<int> nums1 = {1,2,3,4};
    vector<int> nums2 = {-1,1,0,-3,3};

    Solution solution;

    vector<int> res1 = solution.productExceptSelf(nums1);
    vector<int> res2 = solution.productExceptSelf(nums2);

    for(int i:res1){
        cout << i << " ";
    }
    cout << endl;

    for(int i:res2){
        cout << i << " ";
    }
    cout << endl;
}
