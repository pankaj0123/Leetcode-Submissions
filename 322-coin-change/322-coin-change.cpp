class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m=coins.size();
        int w=amount;
        int dp[m+1][w+1];
        
        for(int i=0;i<=m;i++)
            dp[i][0]=0;
        
        for(int i=1;i<=w;i++)
            dp[0][i]=INT_MAX-1;
        
        
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<w+1;j++)
            {
                if(coins[i-1]<=j)
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
                else
                    dp[i][j]=dp[i-1][j];
            }
            return (dp[m][w]==INT_MAX-1) ? -1 :dp[m][w];
    }
};