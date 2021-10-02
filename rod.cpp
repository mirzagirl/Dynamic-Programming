#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define int long long
#define itr(i, n) for(int i = 0; i < n; ++i)
#define itr1(i, a, n) for(int i = a; i < n; ++i)
#define INF 1e9 + 5
#define pb push_back 
#define ppi pair<int, int>
#define endl "\n"
#define nl cout << "\n"
// For Debugging
#define deb(x) cout << #x << " " << x << endl;
 
int solution() {
    int n; cin >> n;
    int len[3]; cin >> len[0] >> len[1] >> len[2];
    // int x,y,z; cin >> x >> y >> z;
    int dp[4][n+1];
    itr(i, 4) dp[i][0] = 0;
    itr(j, n+1) dp[0][j] = -INF;
    itr1(i, 1, 4) itr1(j, 1, n+1) {
        if(len[i-1] > j) {
            dp[i][j] = dp[i-1][j];
        }
        else {
            // int temp = dp[i][j-len[i-1]];
            // if(!(temp==0 && (j-len[i-1]) != 0)) temp = temp + 1;
            dp[i][j] = max(1+dp[i][j-len[i-1]], dp[i-1][j]);
        }
    }
    return (dp[3][n] >= 0) ? dp[3][n] : -1;
}
int32_t main() {
      IOS;
      int t;
      cin >> t;
      while(t--) {
            // solution();
            cout << solution() << endl;
      }
      return 0;
}
