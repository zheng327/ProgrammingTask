/*
 * 136. 只出现一次的数字
 * 给你一个 非空 整数数组 nums ，除了某个元素只出现一次以外，其余每个元素均出现两次。找出那个只出现了一次的元素。
 * 你必须设计并实现线性时间复杂度的算法来解决此问题，且该算法只使用常量额外空间。
 * 示例 1 ：
 * 输入：nums = [2,2,1]
 * 输出：1
 *
 * 示例 2 ：
 * 输入：nums = [4,1,2,1,2]
 * 输出：4
 *
 * 示例 3 ：
 * 输入：nums = [1]
 * 输出：1
 */


#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num:nums){
            map[num]++;
        }
        for(int num:nums){
            if(map[num] == 1){
                return num;
            }
        }
        return 0;
    }
};

int main() {
    vector<int> example1 = {2,2,1};
    vector<int> example2 = {4,1,2,1,2};
    vector<int> example3 = {1};
    Solution solution;
    int result1 = solution.singleNumber(example1);
    int result2 = solution.singleNumber(example2);
    int result3 = solution.singleNumber(example3);
    std::cout << "result1:" << result1 << std::endl;
    std::cout << "result2:" << result2 << std::endl;
    std::cout << "result3:" << result3 << std::endl;
    return 0;
}
