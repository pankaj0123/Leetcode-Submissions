class Solution {
public:
    int maxArea(int h, int w, vector<int>& hc, vector<int>& vc) {
        
        sort(hc.begin(),hc.end());
        sort(vc.begin(),vc.end());
        

        auto l=max((h-hc.back()),hc[0]);
        auto b=max((w-vc.back()),vc[0]);
        
        for(int i=0;i<hc.size()-1;i++)
            l=max(l,(hc[i+1]-hc[i]));
        
        for(int i=0;i<vc.size()-1;i++)
            b=max(b,(vc[i+1]-vc[i]));
    
        
        return(long) l*b % 1000000007;
    }
};