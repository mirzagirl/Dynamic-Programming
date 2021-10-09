#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

 // } Driver Code Ends
// function to find longest common subsequence

class Solution
{
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
            dp[x][y]=max(dp[x-1][y],dp[x][y-1]);   
         return dp[n][m];
   }


    public:
  
    int lcs(int x, int y, string s1, string s2)
    {
      if(x==0 || y==0)return 0;
       memset(dp,-1,sizeof dp);
       return func(x,y,s1,s2);
    }
         
    
        // your code here
    
};


// { Driver Code Starts.
int main()
{
    int t,n,k,x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(x, y, s1, s2) << endl;
    }
    return 0;
}
  // } Driver Code Ends
