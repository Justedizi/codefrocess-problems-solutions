//
#include <bits/stdc++.h>
using namespace std;

long long solve(long long n, long long k) {
    if (n < k) return -1;
    if (n == k) return 0;
    
    long long lower = k;
    long long upper = k;
    int steps = 0;
    
    while (lower <= n) {
        if (n >= lower && n <= upper) {
            return steps;
        }

        if (lower > (n + 1) / 2 + 2) break;
        
        lower = 2 * lower - 1;
        upper = 2 * upper + 1;
        steps++;
    }
    
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while(t--){
            long long n, k;
            cin >> n >> k;
            cout << solve(n, k) << '\n';
        }
        
    }
    return 0;
}