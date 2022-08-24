class Solution {
public:
    int ans(string &x,string &y,int i,int j,vector<vector<int>> &dp)
    {
        if(i<0) return j+1;
        if(j<0) return i+1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(x[i]==y[j]) return dp[i][j]=ans(x,y,i-1,j-1,dp);
        else
            return dp[i][j]=1+min(ans(x,y,i-1,j-1,dp),
                         min(ans(x,y,i-1,j,dp),ans(x,y,i,j-1,dp)));
    }
    
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        
        vector<vector<int>> dp(m,vector<int>(n,-1));
        
        return ans(word1,word2,m-1,n-1,dp);
    }
};