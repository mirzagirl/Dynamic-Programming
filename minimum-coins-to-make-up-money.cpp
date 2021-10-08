#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
       int knap(int wt[],int n,int W)
       {
          long long int dp[n+1][W+1];
           for(int i=0;i<=n;i++)
             dp[i][0]=0;
           for(int i=0;i<=W;i++)
             dp[0][i]=INT_MAX-1;
           for(int i=1;i<=W;i++)
              {
                  if(i%wt[0]!=0)
                    dp[1][i]=INT_MAX-1;
                  else dp[1][i]=i/wt[0];
              }
           for(int i=1;i<=n;i++)
           for(int j=1;j<=W;j++)
             if(wt[i-1]>j)
               dp[i][j]=dp[i-1][j];
               else 
               dp[i][j]=min(1+dp[i][j-wt[i-1]],dp[i-1][j]);
            if(dp[n][W]==INT_MAX-1 )return -1;else return dp[n][W];
       }

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	   return knap(coins,M,V);
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
