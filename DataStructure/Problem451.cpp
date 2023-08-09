/*
451. 根据字符出现频率排序
给定一个字符串 s ，根据字符出现的 频率 对其进行 降序排序 。一个字符出现的 频率 是它出现在字符串中的次数。
返回 已排序的字符串 。如果有多个答案，返回其中任何一个。

示例 1:
输入: s = "tree"
输出: "eert"
解释: 'e'出现两次，'r'和't'都只出现一次。
因此'e'必须出现在'r'和't'之前。此外，"eetr"也是一个有效的答案。

示例 2:
输入: s = "cccaaa"
输出: "cccaaa"
解释: 'c'和'a'都出现三次。此外，"aaaccc"也是有效的答案。
注意"cacaca"是不正确的，因为相同的字母必须放在一起。

示例 3:
输入: s = "Aabb"
输出: "bbAa"
解释: 此外，"bbaA"也是一个有效的答案，但"Aabb"是不正确的。
注意'A'和'a'被认为是两种不同的字符。
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        int length = s.length();
        for(auto &ch : s){
            mp[ch]++;
        }
        vector<pair<char, int>> vec;
        for(auto &it : mp){
            vec.emplace_back(it);
        }
        sort(vec.begin(), vec.end(), [](const pair<char, int> &a, const pair<char, int> &b){
            return a.second > b.second;
        });
        string res;
        for(auto &[ch, num] : vec){
            for(int i = 0; i < num; i++){
                res.push_back(ch);
            }
        }
        return res;
    }
};

int main(){
    string s1 = "tree";
    string s2 = "cccaaa";
    string s3 = "Aabb";

    Solution solution;

    cout << solution.frequencySort(s1) << endl;
    cout << solution.frequencySort(s2) << endl;
    cout << solution.frequencySort(s3) << endl;
}
