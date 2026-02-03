#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        int res = 0;
        int last = 0;        
        for(int i =0;i <n;i++){
            int a;
            cin >> a;

            if(i == n-1){
                res = max(max(res, 2*(x-a)),a - last);

            }else{
                res = max(res,a - last);
            }
            last = a;
            }
            cout << res << '\n';
        }
        
    return 0;
}
    