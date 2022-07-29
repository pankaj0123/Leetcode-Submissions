class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0;
        int mini=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            pr=max(pr,prices[i]-mini);
        }
        
        return pr;
    }
    
};