#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;
bool current_component_is_cyclic;

void dfs(int u) {
    visited[u] = true; // Mark the current node as visited
    // If this node (u) does not have exactly 2 neighbors, then the entire
    // connected component cannot be a simple cycle.
    if (adj[u].size() != 2) {
        current_component_is_cyclic = false; // Set the flag to false
    }

    // Recursively visit all unvisited neighbors
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(v); // Continue exploring the component
        }
    }
}

int main(){
    // Optimizations for faster I/O in competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, m; // n: number of vertices (nodes), m: number of edges
    cin >> n >> m;

    // Resize adjacency list and visited array.
    // We use n + 1 because nodes are typically 1-indexed in competitive programming.
    adj.resize(n + 1); 
    visited.resize(n + 1, false);

    // Read edges and build the adjacency list
    for (int i = 0; i < m; ++i) {
        int u, v;
        cin >> u >> v;
        // For an undirected graph, add edges in both directions
        adj[u].push_back(v);
        adj[v].push_back(u); 
    }

    int cyclic_components_count = 0; // Counter for simple cyclic components

    // Iterate through all nodes to find connected components
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) { // If node 'i' hasn't been visited yet, it's part of a new component
            // Assume the component is cyclic until we find a node that breaks the rule
            current_component_is_cyclic = true; 
            
            dfs(i); // Start DFS from this node to explore its connected component

            // After the DFS completes for this entire component, check the flag.
            // If 'current_component_is_cyclic' is still true, it means ALL nodes
            // in this component had exactly 2 neighbors, confirming it's a simple cycle.
            if (current_component_is_cyclic) {
                cyclic_components_count++;
            }
        }
    }

    cout << cyclic_components_count << "\n";

    return 0;
}
