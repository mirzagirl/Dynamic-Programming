
#include <bits/stdc++.h>
using namespace std;
class Solution{
    
    public : 
    bool  kp(int arr[],int sum,int n){
        sum=sum/2;
        bool dp[n+1][sum+1];
        for(int i=0;i<n;i++)dp[i][0]=true;
        for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++)
           if(arr[i-1]>j)
           dp[i][j]=dp[i-1][j];
           else dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
       
        if(dp[n][sum])return  true;
        else return false;
        
    }
public:
    int equalPartition(int N, int arr[])
    {
        int sum=0;for(int i=0;i<N;i++)sum+=arr[i];
        
        if(sum%2==1)return 0;
        else  { if(kp(arr,sum,N)) return 1;
        else return 0;}
    }
};
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
} 
