// https://codeforces.com/problemset/problem/1475/C
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int A, B, k;
    cin >> A >> B >> k;
    vector<int> a(k), b(k);
    for(int i = 0; i < k; i++) cin >> a[i];
    for(int i = 0; i < k; i++) cin >> b[i];

    // Count how many times each boy and each girl appears
    vector<int> countA(A + 1, 0);
    vector<int> countB(B + 1, 0);

    for(int x : a) countA[x]++;
    for(int x : b) countB[x]++;

    long long ans = 0;
    
    // For each pair (boy_i, girl_i), the number of valid pairs to combine with is:
    // Total other pairs (k - 1)
    // MINUS pairs involving the same boy: (countA[boy_i] - 1)
    // MINUS pairs involving the same girl: (countB[girl_i] - 1)
    
    for(int i = 0; i < k; i++){
        ans += (k - 1) - (countA[a[i]] - 1) - (countB[b[i]] - 1);
    }

    // Since each pair (i, j) is counted twice (once from i's perspective, once from j's), divide by 2
    cout << ans / 2 << "\n";
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
