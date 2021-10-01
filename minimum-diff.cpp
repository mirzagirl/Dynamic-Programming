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
    
    int n,W=0,c=INT_MAX;cin>>n;int wt[n];
    for(int i=0;i<=n;i++)dp[i][0]=true;
    for(int i=0;i<n;i++)cin>>wt[i],W+=wt[i];
     knap1(wt,W,n);
     for(int i=0;i<=W;i++){
         int v1;
         if(dp[n][i]){v1=abs(W-2*i);c=min(c,v1);}
      
     }
     cout<<c;
}
