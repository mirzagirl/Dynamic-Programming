#include<bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b) ? a : b; }
int knap1(int wt[],int val[],int sum,int n)
{
    
       int dp[n+1][sum+1];
       
       for(int i=0; i<n+1; i++){
           for(int j=0; j<sum+1; j++){
               if(!i||!j){
                   dp[i][j]=0;
               }
               else if(wt[i-1]<=j){
                   dp[i][j]=max(val[i-1]+dp[i][j-wt[i-1]], dp[i-1][j]);
               }
               else{
                  dp[i][j]=dp[i-1][j]; 
               }
           }
       }
       
       return dp[n][sum];
}
int main()
{  
  
    int n,W;cin>>n>>W;int wt[n],v[n];
  
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<knap1(wt,v,W,n);
}
