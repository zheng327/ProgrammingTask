/*
 * 350. 两个数组的交集 II
 * 给你两个整数数组 nums1 和 nums2 ，请你以数组形式返回两数组的交集。返回结果中每个元素出现的次数，应与元素在两个数组中都出现的次数一致（如果出现次数不一致，则考虑取较小值）。可以不考虑输出结果的顺序。
 * 示例 1：
 * 输入：nums1 = [1,2,2,1], nums2 = [2,2]
 * 输出：[2,2]
 *
 * 示例 2:
 * 输入：nums1 = [4,9,5], nums2 = [9,4,9,8,4]
 * 输出：[4,9]
 */
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> hashmap;
        vector<int> res;
        if(nums1.size() < nums2.size()){
            return intersect(nums2,nums1);
        }
        for(int num:nums1){
            hashmap[num]++;
        }
        for(int num:nums2){
            if(hashmap[num] > 0){
                hashmap[num]--;
                res.push_back(num);
            }
        }
        return res;
    }
};

int main() {
    vector<int> nums1_1 = {1,2,2,1}, nums2_1 = {2,2};
    vector<int> nums1_2 = {4,9,5}, nums2_2 = {9,4,9,8,4};
    Solution solution;
    vector<int> res1 = solution.intersect(nums1_1, nums2_1);
    vector<int> res2 = solution.intersect(nums1_2, nums2_2);
    for(int x : res1){
        cout << x << " ";
    }
    cout << endl;
    for(int x : res2){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
