#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0 ; i <n ;i ++){
            cin >> p[i];
        }
        sort(p.begin() + 1, p.end());

        if(is_sorted(p.begin(), p.end())){
            cout << "yes" << '\n';
        }else{
            cout << "no" << '\n';
        }
    }
    return 0;
}