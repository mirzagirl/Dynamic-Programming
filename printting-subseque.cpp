#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
      public:  int dp[1001][1001];
   string func(int x, int y, string &s1, string &s2){
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
          string s="";
          int i=n;int j=m;
         
          while(i>0&&j>0){
              
              if(dp[i-1][j]==dp[i][j-1])
              {
                  i--;j--;s+=s1[i-1];
                  
              }
              else{
                  if(dp[i-1][j]>dp[i][j-1])
                      i--;
                else j--;
              }
          }
          if(s.size()==0)return "-1";
          else return s;
        
   }
    
   string longestCommonSubstr (string S1, string S2, int n, int m)
    {
       
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
