#include<bits/stdc++.h>
using namespace std;
bool dp[1001][1001];
int max(int a, int b) { return (a > b) ? a : b; }
void knap1(int wt[],int W,int n)
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=W;j++)
    if(wt[i-1]>j)
        dp[i][j]=dp[i-1][j];
    else 
        dp[i][j]= dp[i-1][j-wt[i-1]]||dp[i-1][j];
    
}
int main()
{   
    
    int n,W=0,ans=INT_MAX;cin>>n;int wt[n],v[n];
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=0;i<n;i++)cin>>wt[i],W+=wt[i];
    for(int i=1;i<=W;i++){int cur;
        if(dp[n][i])cur=abs(W-2*i);
        ans=min(cur,ans);
    }cout<<ans<<" ";
}
