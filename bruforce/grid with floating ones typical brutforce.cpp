// https://codeforces.com/problemset/problem/1360/E
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    bool possible = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == '1') {
                if (i < n - 1 && j < n - 1) {
                    if (grid[i + 1][j] == '0' && grid[i][j + 1] == '0') {
                        possible = false;
                        break;
                    }
                }
            }
        }
        if (!possible) break;
    }

    if (possible) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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