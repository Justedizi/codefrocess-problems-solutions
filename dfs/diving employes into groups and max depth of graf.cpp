// https://codeforces.com/problemset/problem/115/A
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
int max_depth = 0;

// u: current employee, d: depth level
void dfs(int u, int d) {
    max_depth = max(max_depth, d);
    for (int subordinate : adj[u]) {
        dfs(subordinate, d + 1);
    }
}


//anser is just depth of a graf 
/*
    3 -> ceo 
   / \
   2  1 -> manager
       \ 
        4 -> asistant

*/


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    adj.resize(n + 1);
    vector<int> roots;

    for (int i = 1; i <= n; i++) {
        int manager;
        cin >> manager;
        if (manager == -1) {
            // This person has no manager, they are the start of a tree
            roots.push_back(i);
        } else {
            // Manager manages employee i
            adj[manager].push_back(i);
        }
    }

    // Run DFS starting from every root
    for (int root : roots) {
        dfs(root, 1);
    }

    cout << max_depth << endl;

    return 0;
}
