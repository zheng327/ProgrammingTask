/*
 * 88. 合并两个有序数组
 * 给你两个按 非递减顺序 排列的整数数组 nums1 和 nums2，另有两个整数 m 和 n ，分别表示 nums1 和 nums2 中的元素数目。
 * 请你 合并 nums2 到 nums1 中，使合并后的数组同样按 非递减顺序 排列。
 * 注意：最终，合并后数组不应由函数返回，而是存储在数组 nums1 中。为了应对这种情况，nums1 的初始长度为 m + n，其中前 m 个元素表示应合并的元素，后 n 个元素为 0 ，应忽略。nums2 的长度为 n 。
 * 示例 1：
 * 输入：nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
 * 输出：[1,2,2,3,5,6]
 * 解释：需要合并 [1,2,3] 和 [2,5,6] 。
 * 合并结果是 [1,2,2,3,5,6] ，其中斜体加粗标注的为 nums1 中的元素。
 *
 * 示例 2：
 * 输入：nums1 = [1], m = 1, nums2 = [], n = 0
 * 输出：[1]
 * 解释：需要合并 [1] 和 [] 。
 * 合并结果是 [1] 。
 *
 * 示例 3：
 * 输入：nums1 = [0], m = 0, nums2 = [1], n = 1
 * 输出：[1]
 * 解释：需要合并的数组是 [] 和 [1] 。
 * 合并结果是 [1] 。
 * 注意，因为 m = 0 ，所以 nums1 中没有元素。nums1 中仅存的 0 仅仅是为了确保合并结果可以顺利存放到 nums1 中。
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p1 = m - 1, p2 = n - 1;
        int tail = m + n -1;
        int cur;
        while(p1 >= 0 || p2 >= 0){
            if(p2 == -1){
                cur = nums1[p1--];
            }
            else if(p1 == -1){
                cur = nums2[p2--];
            }
            else if(nums1[p1] > nums2[p2]){
                cur = nums1[p1--];
            }
            else{
                cur = nums2[p2--];
            }
            nums1[tail--] = cur;
        }
    }
};
int main() {
    vector<int> nums1_1 = {1, 2, 3, 0, 0, 0}, nums1_2 ={2, 5, 6};
    int m1 = 3, n1 = 3;
    vector<int> nums2_1 = {1}, nums2_2;
    int m2 = 1, n2 = 0;
    vector<int> nums3_1 = {0}, nums3_2 ={1};
    int m3 = 0, n3 = 1;
    Solution solution;
    solution.merge(nums1_1, m1, nums1_2, n1);
    for(int x:nums1_1){
        cout << x << " ";
    }
    cout << endl;
    solution.merge(nums2_1, m2, nums2_2, n2);
    for(int x:nums2_1){
        cout << x << " ";
    }
    cout << endl;
    solution.merge(nums3_1, m3, nums3_2, n3);
    for(int x:nums3_1){
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
