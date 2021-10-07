// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public: 
    int knap(int a[],int n,int W){
        int min=INT_MAX;
        bool dp[n+1][W+1];
        for(int i=0;i<=n;i++)
        for(int j=0;j<=W+1;j++)
         if(j==0)dp[i][j]=true;
         else if(i==0)dp[i][j]=false;
         else if(a[i-1]>j)
         dp[i][j]=dp[i-1][j];
         else dp[i][j]=dp[i-1][j-a[i-1]]||dp[i-1][j];
        
        for(int i=1;i<=W;i++)
            {
                if(dp[n][i])
                {int a1=abs(2*i-W);
                if(a1<min)min=a1;}
            } 
            return min;
}

  public:
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    int sum=0;
	    for(int i=0;i<n;i++)sum+=arr[i];
	    return knap(arr,n,sum);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends
