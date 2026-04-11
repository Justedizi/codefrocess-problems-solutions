#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];

    int l = 0;
    vector<int> ans;
    
    while (l < n) {
        int r = l;
        while (r < n && s[r] == s[l]) {
            r++;
        }
        
        if (r - l == 1) {
            cout << -1 << "\n";
            return;
        }
        //cyclic rotation of segmant for exaple by 1 this ensures that no one gets the sam shoe    
        for (int i = l + 1; i < r; i++) {
            ans.push_back(i + 1); // 1-based index
        }
        ans.push_back(l + 1);
        l = r;
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}