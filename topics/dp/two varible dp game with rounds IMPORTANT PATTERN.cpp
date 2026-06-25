// https://codeforces.com/problemset/problem/1418/C
#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    // dp[i][0] -> Min cost to have defeated 'i' bosses, and it is NOW Friend's turn.
    // dp[i][1] -> Min cost to have defeated 'i' bosses, and it is NOW My turn.
    vector<vector<int>> dp(n + 1, vector<int>(2, INF));

    // Base Case: 
    // At the start (0 bosses defeated), it is the Friend's turn. Cost is 0.
    dp[0][0] = 0; 

    for(int i = 0; i < n; i++){
        // Transition from Friend's turn (0)
        if(dp[i][0] != INF){
            // Friend fights 1 boss (boss at index i)
            // Cost increases by a[i]. Next state is (i+1) bosses defeated, My turn.
            if(i + 1 <= n) 
                dp[i+1][1] = min(dp[i+1][1], dp[i][0] + a[i]);

            // Friend fights 2 bosses (bosses at index i and i+1)
            // Cost increases by a[i] + a[i+1]. Next state is (i+2) bosses defeated, My turn.
            if(i + 2 <= n) 
                dp[i+2][1] = min(dp[i+2][1], dp[i][0] + a[i] + a[i+1]);
        }

        // Transition from My turn (1)
        if(dp[i][1] != INF){
            // I fight 1 boss (boss at index i)
            // Cost increases by 0. Next state is (i+1) bosses defeated, Friend's turn.
            if(i + 1 <= n) 
                dp[i+1][0] = min(dp[i+1][0], dp[i][1]);

            // I fight 2 bosses (bosses at index i and i+1)
            // Cost increases by 0. Next state is (i+2) bosses defeated, Friend's turn.
            if(i + 2 <= n) 
                dp[i+2][0] = min(dp[i+2][0], dp[i][1]);
        }
    }

    // The answer is the minimum cost to reach state 'n' (all bosses defeated).
    // It doesn't matter whose turn it would be next (game is over).
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
