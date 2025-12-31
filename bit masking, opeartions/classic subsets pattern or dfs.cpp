#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int res = 0;
    int n, l, r, x;
    cin >> n >> l >> r >> x;
    vector<int> problems(n);

    for(int i = 0; i < n; i++){
        cin >> problems[i];
    }

    for(int i = 0; i < (1 << n); i++){
        long long total_val = 0; 
        int min_val = 1e9 + 7;
        int max_val = -1;
        int contained = 0;

        for(int j = 0; j < n; j++){
            // && and & are diffrent remember !!
            if(i & (1 << j)){
                contained++;
                total_val += problems[j];
                min_val = min(problems[j], min_val);
                max_val = max(problems[j], max_val);
            } 
        }

        if(contained >= 2 && total_val >= l && total_val <= r && (max_val - min_val) >= x ) {
            res++; 
        }
    }
    cout << res << endl;

    return 0;
}
