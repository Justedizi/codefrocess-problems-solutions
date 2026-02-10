#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int res = 1e9;
  int x ;
  for(int i = 0 ; i <n ; i++){
    cin >> x;
    res = min(res, abs(x));
  }
  cout << res << '\n';
  return 0;
}
 
