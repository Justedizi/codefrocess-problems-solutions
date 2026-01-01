// https://codeforces.com/contest/24/problem/A
#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> adj[105]; 

int dfs(int u, int p) {
    for (auto edge : adj[u]) {
        int v = edge.first;
        int cost = edge.second;

        // If v is the parent, ignore it (don't go backward)
        if (v == p) continue;

        // If v is 1, we completed the circle!
        if (v == 1) return cost;

        // Otherwise, keep walking forward
        return cost + dfs(v, u);
    }
    return 0; // Should not reach here in a valid ring
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int total_sum = 0;

    for(int i = 0; i < n; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        adj[u].push_back({v, 0});
        adj[v].push_back({u, c});
        total_sum += c;
    }

    // Start DFS from node 1.
    // We pass -1 as the parent because node 1 has no parent yet.
    int current_cost = dfs(1, -1);

    cout << min(current_cost, total_sum - current_cost) << endl;

    return 0;
}
