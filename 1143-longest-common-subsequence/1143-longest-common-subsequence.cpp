class Solution {
public:
    int dp[1001][1001];
    int helper(string &text1,string &text2,int n,int m)
    {
        if(m==0 || n==0)
            return 0;
        
        if(dp[m][n]!=-1) return dp[m][n]; 
        
        if(text1[n-1]==text2[m-1])
            return dp[m][n]=1+helper(text1,text2,n-1,m-1);
        else
            return dp[m][n]=max(helper(text1,text2,n,m-1),helper(text1,text2,n-1,m));
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        
        memset(dp,-1,sizeof(dp));
        
        int n=text1.size(); 
        int m=text2.size();
        
        return helper(text1,text2,n,m);
        
        
    }
};