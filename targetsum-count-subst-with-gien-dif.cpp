
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
 
  public:
    int findTargetSumWays(vector<int>&A ,int target) {
       int s = 0;
        int sum = 0;
        int n = A.size();
        for(int i=0;i<n;i++)
           sum += A[i];

        s = target + sum;
        if(s%2 != 0)
             return 0;
        s = s/2; 
        vector<vector<int>>dp(n+1,vector<int>(s+1,0));
        for(int i=0;i<=n;i++)
              dp[i][0] = 1;
    
        for(int i=1;i<=n;i++){
            for(int j=0;j<=s;j++){
               if(A[i-1] <= j)
                 dp[i][j] = dp[i-1][j] + dp[i-1][j-A[i-1]];
               else
                dp[i][j] = dp[i-1][j];
           }
        }    
    return dp[n][s];
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends
