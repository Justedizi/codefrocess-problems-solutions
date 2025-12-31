// https://codeforces.com/problemset/problem/913/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define v vector
#define m unordered_map

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;


    //tree looks somethin like this

    /*
    5   6  7 
      \ | / 
        2   3   4
         \  |  / 
            1
    */

    // we skip 0 and 1 becouse 1 is head so 

    v<v<int>> adj(n + 1);
    for (int i = 2; i <= n; i++) {
        int p;
        cin >> p;
        adj[p].push_back(i);
    }

    for (int i = 1; i <= n; i++) {
        // If node i is not a leaf (it has children)
        if (!adj[i].empty()) {
            int leaf_count = 0;
            for (int child : adj[i]) {
                // A child is a leaf if it has no children of its own
                if (adj[child].empty()) {
                    leaf_count++;
                }
            }
            if (leaf_count < 3) {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
    return 0;
}
