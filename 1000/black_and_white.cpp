#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int sum_of_black = 0;
    int l = k- 1;
    int res = k + 1;
    for(int i = 0; i < n; i++){
      sum_of_black += (int) (s[i] == 'B');
      if(i > l){
        sum_of_black -= (int) s[i - k] == 'B';
      }
      res = min(res, k - sum_of_black);
    }
    cout << res << endl;  
  }
  return 0;
}
