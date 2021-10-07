 vector<vector<int>> t(n+1,vector<int> (sum+1));
        
        for(int i=0; i<n+1; i++){
            for(int j=0; j<sum+1; j++){
                
                if(j==0)   t[i][j]=1;
               else if(i==0)    t[i][j]=0;
               
               else if(arr[i-1] > j)    t[i][j]=t[i-1][j]%1000000007;
               
               else         t[i][j]=t[i-1][j]%1000000007 + t[i-1][j-arr[i-1]]%1000000007;
            }
        }
        return (int)t[n][sum]%1000000007;
