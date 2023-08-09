/*
1249. 移除无效的括号
给你一个由 '('、')' 和小写字母组成的字符串 s。
你需要从字符串中删除最少数目的 '(' 或者 ')' （可以删除任意位置的括号)，使得剩下的「括号字符串」有效。
请返回任意一个合法字符串。
有效「括号字符串」应当符合以下 任意一条 要求：
空字符串或只包含小写字母的字符串
可以被写作 AB（A 连接 B）的字符串，其中 A 和 B 都是有效「括号字符串」
可以被写作 (A) 的字符串，其中 A 是一个有效的「括号字符串」

示例 1：
输入：s = "lee(t(c)o)de)"
输出："lee(t(c)o)de"
解释："lee(t(co)de)" , "lee(t(c)ode)" 也是一个可行答案。

示例 2：
输入：s = "a)b(c)d"
输出："ab(c)d"

示例 3：
输入：s = "))(("
输出：""
解释：空字符串也是有效的
*/

#include <iostream>
#include <stack>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> stk;
        unordered_set<int> il;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '(')
                stk.push(i);
            else if(stk.empty() && s[i] == ')')
                il.insert(i);
            else if(s[i] == ')')
                stk.pop();
        }
        if(stk.empty() && il.empty())
            return s;
        while(!stk.empty()){
            il.insert(stk.top());
            stk.pop();
        }
        string res;
        for(int i = 0; i < s.size(); i++){
            if(il.find(i) != il.end())
                continue;
            res += s[i];
        }
        return res;
    }
};

int main(){
    string s1 = "lee(t(c)o)de)";
    string s2 = "a)b(c)d";
    string s3 = "))((";

    Solution solution;

    cout << solution.minRemoveToMakeValid(s1) << endl;
    cout << solution.minRemoveToMakeValid(s2) << endl;
    cout << solution.minRemoveToMakeValid(s3) << endl;
}
