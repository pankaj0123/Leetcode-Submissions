// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int minCoins(int coins[], int m, int w) 
	{ 
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

// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends