#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int i = 1;
    int dist = 1;
    int aux = 1;
    int res = 0;
    while (i <= n) {
      while (aux < 10 && i <= n) {
        i += dist;
        res++;
        aux++;
      }
      aux = 1;
      dist *= 10;
    }
    cout << res << '\n';
  }
}
