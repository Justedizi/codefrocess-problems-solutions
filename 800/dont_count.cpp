#include <bits/stdc++.h>
using namespace std; 

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s; 
        
        int ops = 0;
        bool found = false;
        //string::npos  is like -1 means not found 
        for(int i = 0; i < 6; i++){
            if(x.find(s) != string::npos){
                found = true;
                break;
            }
            x += x;
            ops++;
        }
        
        if(found){
            cout << ops << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}