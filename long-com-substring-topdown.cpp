#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
      public:  int dp[1001][1001];
   int func(int x, int y, string &s1, string &s2){
           int n=s1.size();
           int m=s2.size();
       for(int i=0;i<=n;i++)dp[i][0]=0;
       for(int j=0;j<=m;j++)dp[0][j]=0;
       for(x=1;x<=n;x++)
       for(y=1;y<=m;y++)
        if(s1[x-1]==s2[y-1])
            dp[x][y]=1+dp[x-1][y-1];
       else
            dp[x][y]=0;  
             int max1=INT_MIN; 
            for (int i = 0; i <= n ; i++) {
            for (int j = 0; j <= m ; j++) {
                max1 = max(max1, dp[i][j]);
            }
        }
        return max1;
        
   }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
       if(n==0||m==0)return 0;
       return func(n,m,S1,S2);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
