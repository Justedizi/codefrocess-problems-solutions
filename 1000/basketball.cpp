#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n, s;
    cin >> n >> s;
    vector<int> players(n);
    for (int i = 0; i < n; i++)
      cin >> players[i];
    sort(players.begin(), players.end());
    int l = 0;
    int r = n - 1;
    long long sum = players[r];
    int res = 0;
    while (l <= r) {
      if (s >= sum) {
        sum += players[r];
        l++;
      } else {
        res++;
        r--;
        sum = players[r];
      }
    }
    cout << res << '\n';
  return 0;
}
