#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int max(int a, int b) { return (a > b) ? a : b; }
int un_knap1(int wt[],int v[],int W,int n)
{
    for(int i=0;i<=n;i++)
    for(int j=0;j<=W;j++)
    if(i==0||j==0)
    dp[i][j]=0;
     else if(wt[i-1]>j)
        dp[i][j]=dp[i-1][j];
    else 
        dp[i][j]=max(v[i-1]+dp[i][j-wt[i-1]],dp[i-1][j]);
        return dp[n][W];
}
int main()
{   memset(dp,-1,sizeof(dp));
  
    int n,W;cin>>n>>W;int wt[n],v[n];
     for(int i=0;i<=n;i++)dp[i][0]=0,dp[0][i]=0;
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<un_knap1(wt,v,W,n);
}
