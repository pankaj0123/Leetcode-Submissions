class Solution {
public:
     int lcs(string A, string B,int n)
    {
        int dp[1001][1001];
        memset(dp,0,sizeof(dp));
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                dp[i][j]=(A[i-1]==B[j-1])?1+dp[i-1][j-1]:max(dp[i-1][j],dp[i][j-1]);
            }
        
        return dp[n][n];
    }
    int longestPalindromeSubseq(string A) {
        int n=A.length();
        string B = A; 
        reverse(B.begin(),B.end());
        return lcs(A,B,n);
    }
};