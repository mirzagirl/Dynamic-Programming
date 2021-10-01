#include<bits/stdc++.h>
using namespace std;
int max(int a, int b) { return (a > b) ? a : b; }
int knap1(int wt[],int v[],int W,int n){
    
    if(n==0||W==0)return 0;
    if(wt[n-1]>W) return knap1(wt,v,W,n-1);
    else 
    return max(v[n-1]+knap1(wt,v,W-wt[n-1],n-1),knap1(wt,v,W,n-1));
    
}
int main()
{
    int n,W;cin>>n>>W;int wt[n],v[n];
    for(int i=0;i<n;i++)cin>>wt[i];
    for(int i=0;i<n;i++)cin>>v[i];
    cout<<knap1(wt,v,W,n);
}
