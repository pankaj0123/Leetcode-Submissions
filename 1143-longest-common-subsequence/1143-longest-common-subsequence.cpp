class Solution {
public: 
    int longestCommonSubsequence(string a, string b) {
        int m[1001][1001] = {};
    for (auto i = 1; i <a.size()+1; ++i)
        for (auto j = 1; j <b.size()+1; ++j)
            m[i][j] = a[i-1] == b[j-1] ? m[i-1][j-1] + 1 : max(m[i -1][j], m[i][j - 1]);
    return m[a.size()][b.size()];
        
    }
};