#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i; 
    }
    
    sort(a.rbegin(), a.rend());
    
    long long res = 0;
    vector<int> ans(n); 
    
    int coord = 1;
    for(int i = 0; i < n; i++) {
        res += 2LL * abs(coord) * a[i].first; 
        
        ans[a[i].second] = coord; 
        
        if (coord > 0) {
            coord = -coord;
        } else {
            coord = -coord + 1;
        }
    }
    
    cout << res << "\n";
    cout << 0 << " "; 
    for(int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}