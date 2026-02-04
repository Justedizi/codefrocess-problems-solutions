#include <bits/stdc++.h>
using namespace std;    

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string arr;
        cin >> arr;
        int w = 0;
        int wc =0;
        for(int i =0 ; i<n; i++){
            if(arr[i] == '.'){
                wc++; 
            }else{
                w = max(w,wc);
                wc = 0;
            }
        }
        w = max(w, wc);

        if(w >2){
            cout << 2 << '\n';
            continue;
        }
        int c = 0;
        for(int i = 0; i< n;i++){
            if(arr[i] == '.'){
                c++;
            }
        }
        cout << c << '\n';


    }
    return 0;
}