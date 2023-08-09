/*
 * 118. 杨辉三角
 * 给定一个非负整数 numRows，生成「杨辉三角」的前 numRows 行。
 * 在「杨辉三角」中，每个数是它左上方和右上方的数的和。
 *
 * 示例 1:
 * 输入: numRows = 5
 * 输出: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
 *
 * 示例 2:
 * 输入: numRows = 1
 * 输出: [[1]]
 */
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res(numRows);
        for(int i = 0; i < numRows; ++i){
            res[i].resize(i+1);
            res[i][0] = 1;
            res[i][i] = 1;
            for(int j = 1; j < i; ++j){
                res[i][j] = res[i-1][j-1] + res[i-1][j];
            }
        }
        return res;
    }
};

int main() {
    Solution solution;
    vector<vector<int>> result1, result2;
    result1 = solution.generate(5);
    result2 = solution.generate(1);
    for(vector<int> i:result1){
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    for(vector<int> i:result2){
        for(int j:i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
