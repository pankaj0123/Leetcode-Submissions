class Solution {
public:
    int countsubsum(vector<int>& nums,int sum,int n)
    {
        int dp[n+1][sum+1];
        dp[0][0]=1;
        for(int i=1;i<sum+1;i++)
            dp[0][i]=0;
            
        for(int i=1;i<n+1;i++)
            for(int j=0;j<sum+1;j++) //array can have 0 as a element
            {
                if(nums[i-1]<=j)
                    dp[i][j]=(dp[i-1][j]+dp[i-1][j-nums[i-1]]);
                else
                    dp[i][j]=dp[i-1][j];
            }
            
        return dp[n][sum];
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        
        int s1=(target+sum)/2;
        
        if((target+sum)%2!=0 || abs(target)>sum) return 0;
        
        return countsubsum(nums,s1,nums.size());
    }
};