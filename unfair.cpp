//
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while(t--){
            long long n, k;
            cin >> n >> k;
            
            if (k > 60) {
                cout << 0 << '\n';
                continue;
            }
            
            long long f1 = 1, f2 = 1;
            for (int i = 0; i < k; ++i) {
                long long next = f1 + f2;
                f1 = f2;
                f2 = next;
            }
            
            long long ans = f2 - 1;
            if (ans > n) ans = n;
            cout << n - ans << '\n';
        }
    }
    return 0;
}