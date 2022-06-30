class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        int n=nums.size();
        
        if(n%2==0)
        {
            int sum1 =0; int sum2=0;
            int mid1=nums[n/2];
            
            for(auto i:nums)
                sum1+=abs(mid1-i);
            
            int mid2=nums[n/2-1];
            
            for(auto i:nums)
                sum2+=abs(mid2-i);
            
            sum=min(sum1,sum2);
            
        }
        else{
            int mid=nums[n/2];
            
            for(auto i:nums)
                sum+= abs(mid-i);
        }
        return sum;
    }
};