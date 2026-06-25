// https://codeforces.com/contest/727/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll target;
vector<ll> ans;

// We use bool to stop the recursion as soon as we find the answer

bool dfs(ll u, vector<ll>& path) {
    path.push_back(u);

    if (u == target) {
        ans = path;
        return true;
    }

    if (2 * u <= target) {
        if (dfs(2 * u, path)) return true;
    }

    if (10 * u + 1 <= target) {
        if (dfs(10 * u + 1, path)) return true;
    }

    //backtrack
    path.pop_back();
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a;
    cin >> a >> target;

    vector<ll> path;
    if (dfs(a, path)) {
        cout << "YES" << endl;
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
        cout << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
