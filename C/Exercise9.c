/*
题目：最长公共子序列
描述：编写一个函数，求解两个字符串的最长公共子序列。
*/
#include <stdio.h>
#include <string.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int longestCommonSubsequence(char *str1, char *str2) {
    int m = strlen(str1);
    int n = strlen(str2);

    int LCS[m + 1][n + 1];
    int i, j;

    // 初始化LCS数组
    for (i = 0; i <= m; i++) {
        for (j = 0; j <= n; j++) {
            if (i == 0 || j == 0) {
                LCS[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            } else {
                LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
            }
        }
    }

    // 构造最长公共子序列
    int index = LCS[m][n];
    char lcs[index + 1];
    lcs[index] = '\0';
    i = m;
    j = n;

    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcs[index - 1] = str1[i - 1];
            i--;
            j--;
            index--;
        } else if (LCS[i - 1][j] > LCS[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    printf("Longest Common Subsequence: %s\n", lcs);
    return LCS[m][n];
}

int main() {
    char str1[] = "AGGTAB";
    char str2[] = "GXTXAYB";

    int length = longestCommonSubsequence(str1, str2);
    printf("Length of Longest Common Subsequence: %d\n", length);

    return 0;
}
