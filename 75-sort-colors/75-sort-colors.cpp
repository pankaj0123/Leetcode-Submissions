class Solution {
public:
    void sortColors(vector<int>& nums) {
         int j=nums.size()-1;
        
        while(j>0){
            int i=0;
            while(i<j)
            {
                if(nums[i]>nums[j]){
                    swap(nums[i],nums[j]);
                    i++;
                }
                else
                    i++;
            }
            j--;
        }
    }
};