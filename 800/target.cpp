#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    char x;
    while(t--){
    int res = 0;
    for(int i = 0 ;i < 10;i ++){
        for(int j = 0 ; j < 10 ; j++){
            cin >> x;
            if(x == 'X'){
               res +=  min(min(i + 1,10- i ),min(j+1, 10 - j));
            }   
        }
    }
    cout << res << '\n';
    }
    return 0;
}