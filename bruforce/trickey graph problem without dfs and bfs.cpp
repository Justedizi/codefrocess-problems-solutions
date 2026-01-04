// https://codeforces.com/problemset/problem/1433/D
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // Step 1: Check if all districts have the same gang ID.
    // If so, it's impossible to connect them because we can only connect different gangs.
    int first_gang = a[0];
    bool possible = false;
    int other_gang_idx = -1;

    for(int i = 1; i < n; i++){
        if(a[i] != first_gang){
            possible = true;
            other_gang_idx = i; // Store an index of a district with a different gang
            break;
        }
    }

    if(!possible){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;
    vector<pair<int, int>> roads;
    
    // Step 2: Connect the first district (index 0, 1-based) to all other districts
    // that have a DIFFERENT gang ID.
    // This connects all "non-first-gang" nodes to the root (node 0).
    for(int i = 1; i < n; i++){
        if(a[i] != first_gang){
            cout << 1 << " " << (i + 1) << "\n";
        }
    }

    // Step 3: Now we have some nodes (those with same gang as node 0) that are still disconnected.
    // We can't connect them to node 0 directly.
    // But we found 'other_gang_idx' in Step 1, which IS connected to node 0.
    // Since 'other_gang_idx' has a different gang than node 0 (and thus different from all these remaining nodes),
    // we can connect all remaining "first-gang" nodes to 'other_gang_idx'.
    for(int i = 1; i < n; i++){
        if(a[i] == first_gang){
            cout << (other_gang_idx + 1) << " " << (i + 1) << "\n";
        }
    }
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
