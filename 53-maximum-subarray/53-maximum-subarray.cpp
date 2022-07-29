class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi= INT_MIN;
        int sum=0;
        for(int i:nums)
        {
            sum+=i;
            maxi=max(maxi,sum);
            if(sum<0) sum=0;
        }
        return maxi;
    }
};