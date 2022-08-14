class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int total=row*col;
        int count=0;
        int r1=0,c1=0;
        int r2=row-1, c2=col-1;
        
        while(count<total ){
            
        for(int i=c1;count<total && i<=c2;i++){
            
            ans.push_back(matrix[r1][i]);
            count++;
        }
            r1++;
            
        for(int i=r1;count<total && i<=r2;i++ ){
            
            ans.push_back(matrix[i][c2]);
            count++;
            
        }
            c2--;
                
            for(int i=c2;count<total && i>=c1;i-- ){
            
            ans.push_back(matrix[r2][i]);
            count++;
            
        }
            r2--;
            
            for(int i=r2;count<total && i>=r1;i-- ){
            
            ans.push_back(matrix[i][c1]);
            count++;
            
        }
            c1++;
            
            
        }
        return ans;
    }
};