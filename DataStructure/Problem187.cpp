/*
187. 重复的DNA序列
DNA序列 由一系列核苷酸组成，缩写为 'A', 'C', 'G' 和 'T'.。
例如，"ACGAATTCCG" 是一个 DNA序列 。
在研究 DNA 时，识别 DNA 中的重复序列非常有用。
给定一个表示 DNA序列 的字符串 s ，返回所有在 DNA 分子中出现不止一次的 长度为 10 的序列(子字符串)。你可以按 任意顺序 返回答案。

示例 1：
输入：s = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT"
输出：["AAAAACCCCC","CCCCCAAAAA"]

示例 2：
输入：s = "AAAAAAAAAAAAA"
输出：["AAAAAAAAAA"]
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
    const int L = 10;
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        unordered_map<string, int> cnt;
        int n = s.length();
        for(int i = 0; i <= n - L; i++){
            string sub = s.substr(i, L);
            if(++cnt[sub] == 2){
                ans.emplace_back(sub);
            }
        }
        return ans;
    }
};

int main(){
    string s1 = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
    string s2 = "AAAAAAAAAAAAA";

    Solution solution;

    vector<string> res1 = solution.findRepeatedDnaSequences(s1);
    vector<string> res2 = solution.findRepeatedDnaSequences(s2);

    for(string s:res1){
        cout << s << " ";
    }
    cout << endl;

    for(string s:res2){
        cout << s << " ";
    }
    cout << endl;
}
