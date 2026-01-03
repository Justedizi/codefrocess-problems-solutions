// https://codeforces.com/problemset/problem/1418/C
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // dp[i][0] -> Min cost to defeat i bosses, NEXT is Friend's turn
    // dp[i][1] -> Min cost to defeat i bosses, NEXT is My turn
    vector<vector<int>> dp(n + 1, vector<int>(2, INF));

    dp[0][0] = 0; // Start with 0 bosses defeated, Friend goes first

    for(int i = 0; i < n; i++){
        // If state is valid (reachable)
        if(dp[i][0] != INF){ // Friend's turn
            // Friend picks 1 boss (incurs cost if boss is hard)
            // Next state: i+1 bosses defeated, My turn (1)
            if(i + 1 <= n) 
                dp[i+1][1] = min(dp[i+1][1], dp[i][0] + a[i]);
            
            // Friend picks 2 bosses (incurs cost for both if hard)
            // Next state: i+2 bosses defeated, My turn (1)
            if(i + 2 <= n) 
                dp[i+2][1] = min(dp[i+2][1], dp[i][0] + a[i] + a[i+1]);
        }
        
        if(dp[i][1] != INF){ // My turn
            // I pick 1 boss (cost is always 0)
            // Next state: i+1 bosses defeated, Friend's turn (0)
            if(i + 1 <= n) 
                dp[i+1][0] = min(dp[i+1][0], dp[i][1]);
            
            // I pick 2 bosses (cost is always 0)
            // Next state: i+2 bosses defeated, Friend's turn (0)
            if(i + 2 <= n) 
                dp[i+2][0] = min(dp[i+2][0], dp[i][1]);
        }
    }

    cout << min(dp[n][0], dp[n][1]) << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
