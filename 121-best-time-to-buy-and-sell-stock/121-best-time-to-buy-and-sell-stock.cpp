class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int pr=0;
        int st=0;
        int mini=INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            if(mini>prices[i])
                mini=prices[i];
            
            st=prices[i]-mini;
            
            if(st>pr)
                pr=st;
            
        }
        
        return pr;
    }
    
};