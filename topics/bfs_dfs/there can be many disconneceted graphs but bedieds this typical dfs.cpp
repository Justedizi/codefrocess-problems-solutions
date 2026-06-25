// https://codeforces.com/problemset/problem/893/C
#include <bits/stdc++.h>
using namespace std;

vector<bool> seen;
vector<long long> costs; // Use long long for costs up to 10^9
vector<vector<int>> adj;
long long current_component_min = 1e18; // Use long long for costs

void dfs(int u){
    seen[u] = true;
    current_component_min = min(current_component_min, costs[u]);
    for(int v : adj[u]){
        if(!seen[v]){
            dfs(v);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int n, m;
    if (!(cin >> n >> m)) return 0;
    
    costs.resize(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> costs[i];
    }
    
    adj.resize(n + 1);
    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    seen.assign(n + 1, false);
    long long total_cost = 0;
    
    for(int i = 1; i <= n; i++){
        if(!seen[i]){
            current_component_min = 1e18; // Reset min for new component
            dfs(i);
            total_cost += current_component_min;
        }
    }
    
    cout << total_cost << endl;

    return 0;
}
