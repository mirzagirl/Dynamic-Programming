#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
  int knap1(int wt[],int W,int n)
{      
    bool dp[n+1][W+1];
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for (int i = 1; i <= W; i++)
        dp[0][i] = false;
    for(int i=1;i<=n;i++)
    for(int j=1;j<=W;j++)
     if(wt[i-1]>j)
        dp[i][j]=dp[i-1][j];
    else 
        dp[i][j]= dp[i-1][j-wt[i-1]]||dp[i-1][j];
    return dp[n][W];
}
int main()
{   
    
    int n,W;cin>>n>>W;int wt[n],v[n];
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=0;i<n;i++)cin>>wt[i];
    // for(int i=0;i<n;i++)cin>>v[i];
    cout<<knap1(wt,W,n);
}
