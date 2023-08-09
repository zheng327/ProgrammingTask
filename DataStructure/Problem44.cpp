/*
44. 通配符匹配
给你一个输入字符串 (s) 和一个字符模式 (p) ，请你实现一个支持 '?' 和 '*' 匹配规则的通配符匹配：
'?' 可以匹配任何单个字符。
'*' 可以匹配任意字符序列（包括空字符序列）。
判定匹配成功的充要条件是：字符模式必须能够 完全匹配 输入字符串（而不是部分匹配）。
 
示例 1：
输入：s = "aa", p = "a"
输出：false
解释："a" 无法匹配 "aa" 整个字符串。

示例 2：
输入：s = "aa", p = "*"
输出：true
解释：'*' 可以匹配任意字符串。

示例 3：
输入：s = "cb", p = "?a"
输出：false
解释：'?' 可以匹配 'c', 但第二个 'a' 无法匹配 'b'。
*/

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.size();
        int n = p.size();
        vector<vector<int>> dp(m + 1, vector<int>(n+1));
        //dp[i][j] 表示字符串s的前i个字符和模式p的前j个字符是否能匹配
        dp[0][0] = true;
        for(int i = 1; i <= n; i++){
            if(p[i - 1] == '*'){
                dp[0][i] = true;
            }
            else{
                break;
            }
        }
        for(int i = 1; i <= m; i++){
            for(int j = 1; j <= n; j++){
                if(p[j-1] == '*'){
                    dp[i][j] = dp[i][j - 1] | dp[i-1][j];
                }
                else if(p[j - 1] == '?' || s[i - 1] == p[j - 1]){
                    dp[i][j] = dp[i - 1][j - 1];
                }
            }
        }
        return dp[m][n];
    }
};

int main(){
    string s1 = "aa", p1 = "a";
    string s2 = "aa", p2 = "*";
    string s3 = "cb", p3 = "?a";
    Solution solution;
    cout << "res1:" << solution.isMatch(s1, p1) << endl;
    cout << "res2:" << solution.isMatch(s2, p2) << endl;
    cout << "res3:" << solution.isMatch(s3, p3) << endl;
}
