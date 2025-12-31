#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void tweaked_dfs(int u){
    visited[u] = true;
    for(int neighbor: adj[u] ){
        if(visited[neighbor]){
            cout << neighbor << " ";
            return;
        }
        else{
            tweaked_dfs(neighbor);    
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;

    adj.resize(n + 1);
    visited.resize(n + 1);

    for(int i = 1; i <= n; i++){ 
        int p;
        cin >> p;
        adj[i].push_back(p);
    }

    for(int i = 1; i <= n; i++){ 
        fill(visited.begin(), visited.end(), false);
        tweaked_dfs(i);
    }

    return 0;
}
