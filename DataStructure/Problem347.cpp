/*
347. 前 K 个高频元素
给你一个整数数组 nums 和一个整数 k ，请你返回其中出现频率前 k 高的元素。你可以按 任意顺序 返回答案。

示例 1:
输入: nums = [1,1,1,2,2,3], k = 2
输出: [1,2]

示例 2:
输入: nums = [1], k = 1
输出: [1]
*/

#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

class Solution {
public:
    static bool cmp(pair<int, int>& m, pair<int, int>& n){
        return m.second > n.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(int num : nums){
            map[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&cmp)> q(cmp);
        for(auto a:map){
            q.push(a);
            if(q.size() > k){
               q.pop(); 
            }
        }
        vector<int> res;
        while(!q.empty()){
            res.emplace_back(q.top().first);
            q.pop();
        }
        return res;
    }
};

int main(){
    vector<int> nums1 = {1,1,1,2,2,3};
    vector<int> nums2 = {1};

    Solution solution;

    vector<int> res1 = solution.topKFrequent(nums1, 2);
    vector<int> res2 = solution.topKFrequent(nums2, 1);

    for(int i:res1){
        cout << i << " ";
    }
    cout << endl;

    for(int i:res2){
        cout << i << " ";
    }
    cout << endl;
}
