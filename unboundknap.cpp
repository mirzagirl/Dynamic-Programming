#include<bits/stdc++.h>
using namespace std;
bool dp[1001][1001];
int max(int a, int b) { return (a > b) ? a : b; }
bool knap1(int wt[],int W,int n)
{
    for(int i=1;i<=n;i++)
    for(int j=1;j<=W;j++)
    if(wt[i-1]>j)
        dp[i][j]=dp[i-1][j];
    else 
        dp[i][j]= dp[i][j-wt[i-1]]||dp[i-1][j];
    return dp[n][W];
}
int main()
{   
    
    int n,W;cin>>n>>W;int wt[n];
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=0;i<n;i++)cin>>wt[i];
    cout<<knap1(wt,W,n);
}
