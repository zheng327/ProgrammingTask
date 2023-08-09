/*
169. 多数元素
给定一个大小为 n 的数组 nums ，返回其中的多数元素。多数元素是指在数组中出现次数 大于 ⌊ n/2 ⌋ 的元素。
你可以假设数组是非空的，并且给定的数组总是存在多数元素。

示例 1：
输入：nums = [3,2,3]
输出：3

示例 2：
输入：nums = [2,2,1,1,1,2,2]
输出：2
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> counts;
        int majornum = 0, cnt = 0;
        for(int num:nums){
            counts[num]++;
        }
        for(int num:nums){
            if(counts[num] > cnt){
                cnt = counts[num];
                majornum = num;
            }
        }
        return majornum;
    }
};

int main(){
    vector<int> nums1 = {3,2,3};
    vector<int> nums2 = {2,2,1,1,1,2,2};

    Solution solution;

    cout << solution.majorityElement(nums1) << endl;
    cout << solution.majorityElement(nums2) << endl;
}
