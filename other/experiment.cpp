// 
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;
    long long x;
    cin >> t;

    while(t--){
        cin >> x;
        cout << ((x % 4) + 4) % 4 << '\n';
    }

    return 0;
}
