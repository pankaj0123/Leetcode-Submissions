class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        int ans=0;
        vector<int> count(100001,0);
        priority_queue<int> pq;
        
        for(int i : arr)
        {
            count[i]++;
        }
        
        for(int i:count)
        {
            pq.push(i);
        }
        
        int x=0;
        if(pq.top()==arr.size()/2)
        {
            ans=1;
            return ans;
        }
        
        while(x<arr.size()/2)
        {
            x+=pq.top();
            pq.pop();
            ans++;
        }
        
        return ans;
        
    }
};