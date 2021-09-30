#include<bits/stdc++.h>
using namespace std;
bool kp(int v[],int W,int n)
{
    if(W==0)return true;
    if(n==0)return false;
    if(v[n-1]>W)
    return  kp(v,W,n-1);
    else 
     return kp(v,W-v[n-1],n-1)||kp(v,W,n-1);
}





int main(){
    
    
    int n;cin>>n;int W;cin>>W;
    int v[n];
    for(int i=0;i<n;i++)cin>>v[i];
    
    
    
   cout<<kp(v,W,n);
}
