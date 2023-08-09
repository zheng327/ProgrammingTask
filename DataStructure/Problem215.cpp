/*
215. 数组中的第K个最大元素
给定整数数组 nums 和整数 k，请返回数组中第 k 个最大的元素。
请注意，你需要找的是数组排序后的第 k 个最大的元素，而不是第 k 个不同的元素。
你必须设计并实现时间复杂度为 O(n) 的算法解决此问题。

示例 1:
输入: [3,2,1,5,6,4], k = 2
输出: 5

示例 2:
输入: [3,2,3,1,2,4,5,5,6], k = 4
输出: 4
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, less<int>> maxHeap;
        for(int x : nums)
            maxHeap.push(x);
        for(int i = 0; i < k - 1; i++)
            maxHeap.pop();
        return maxHeap.top();
    }
};

int main(){
    vector<int> nums1 = {3,2,1,5,6,4};
    vector<int> nums2 = {3,2,3,1,2,4,5,5,6};

    Solution solution;

    cout << solution.findKthLargest(nums1, 2) << endl;
    cout << solution.findKthLargest(nums2, 4) << endl;
}
